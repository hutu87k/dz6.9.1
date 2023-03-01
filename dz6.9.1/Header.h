#pragma once
class Electro {
public:
    virtual void Action() = 0;
    virtual void PowerOn() { std::cout << "power on" << std::endl; }
    virtual void PowerOff() { std::cout << "power off" << std::endl; }
};
class Portable :public virtual Electro {
public:
    void Action() override;
};

class Household :public virtual Electro {
public:
    void Action() override;
};

class Laptop :public Portable {
public:
    void Action() override;
};

class Phone :public Portable {
public:
    void Action() override;
};

class Vacuum :public Household {
public:
    void Action() override;
};

class SmartVacuum final :virtual public Portable, Household {
public:
    void Action() override;
};