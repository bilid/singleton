#ifndef SINGLETON_H
#define SINGLETON_H

#include "QStringList"
class singleton   //实现单例模式的类
{
private:
    singleton(){

    }  //私有的构造函数

    static singleton* instence;
public:
    static singleton* GetInstance()
    {
        if(instence==NULL)
            instence=new singleton();
        return instence;
    }

};

#endif // SINGLETON_H
