// main.cpp
#include"add.h"
#include"sub.h"
#include"MySQLManager.h"


#include<iostream>
using namespace std;
 
int main(int argc, char** argv)
{
    addFunc(2, 2);
    subFunc(7, 1);
 
    MySQLManager mysql;
    ConnectionInfo info;
    // 填充ConnectionInfo这个结构体，项目中一般从配置文件这读取
    info.user = "root";
    info.password = "12345678";
    info.host = "localhost";
    info.port = 3306;
    info.database = "istio";
    info.unix_socket = NULL;
    info.clientflag = 0;

    printf("ok");
    // mysql连接
    if (!mysql.Init(info))
    {
        return -1;
    }

    // 增加数据测试
    const char* sql1 = "insert into istio_model values ('1')";
    mysql.ExecuteSql(sql1);

    // 删除数据测试
    const char* sql2 = "delete from istio_model where name = '2'";
    mysql.ExecuteSql(sql2);
    printf("ok");

    // 修改数据测试
    const char* sql3 = "update istio_model set id='2' where id = '1'";
    mysql.ExecuteSql(sql3);

    // 查询数据测试
    const char* sql4 = "select * from istio_model";
    mysql.QueryData(sql4);
    mysql.PrintQueryRes();

    // 释放mysql资源
    mysql.FreeConnect();
    return 0;
}