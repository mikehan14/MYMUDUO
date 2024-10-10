#pragma once
/*noncopyable被继承以后，派生类对象可以正常的构造和解析， 但是派生类对象无法进行拷贝
构造和赋值操作*/
class noncopyable{
    public:
        noncopyable(const noncopyable&) = delete;
        noncopyable& operator = (const noncopyable&) = delete;
    private:
        noncopyable() = default;
        ~noncopyable() =default;
};