#include"iostream"
using namespace std;

class Keyboard{
    public:
        virtual void show() = 0;
};
class MKeyboard : public Keyboard{
    public:
        void show(){
            cout<<"微软键盘"<<endl;
        }
};
class LKeyborad : public Keyboard{
    public:
        void show(){
            cout<<"联想键盘"<<endl;
        }
};
class Mouse{
    public:
        virtual void show() = 0;
};
class MMouse : public Mouse{
    public:
        void show(){
            cout<<"微软鼠标"<<endl;
        }
};
class LMouse : public Mouse{
    public:
        void show(){
            cout<<"联想鼠标"<<endl;
        }
};

class IFactory{
    public://老是忘写，c++默认应该是private权限
        virtual Keyboard * createKeyboard() = 0;
        virtual Mouse * createMouse() = 0;
};
class MFactory : public IFactory{
    Keyboard * createKeyboard(){
        return new MKeyboard();
    }
    Mouse * createMouse(){
        return new MMouse();
    }
};
class LFactory : public IFactory{
    Keyboard * createKeyboard(){
        return new LKeyborad();
    }
    Mouse * createMouse(){
        return new LMouse();
    }
};
int main(){
  IFactory *p = new MFactory();
  Keyboard *m = p->createKeyboard();
  Mouse *m1 = p->createMouse();
  m->show();
  m1->show();
  delete m;
  delete m1;
  p = new LFactory();
  Keyboard *l = p->createKeyboard();
  l->show();
  delete l;
  delete p;


}