#include <iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;

};

//抽象显卡类
class GPU
{
public:
	//抽象的显示函数函数
	virtual void display() = 0;

};

//抽象内存条类
class Memory
{
public:
	//抽象的储存函数
	virtual void storage() = 0;

};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, GPU* gpu, Memory* mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}

	//提供工作的函数
	void work()
	{
		//让零件动起来，调用接口
		m_cpu->calculate();

		m_gpu->display();

		m_mem->storage();
	}

	//提供析构函数 释放3个电脑零件
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡零件
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		//释放内存条零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}

	}

private:

	CPU* m_cpu;//CPU的零件指针
	GPU* m_gpu;//显卡的零件指针
	Memory* m_mem;//内存条零件指针
};

//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了！" << endl;
	}
};

class IntelGPU :public GPU
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始储存了！" << endl;
	}
};


//Lenovo厂商

class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};

class LenovoGPU :public GPU
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始储存了！" << endl;
	}
};


void test01()
{
	cout << "第一台电脑开始工作：" << endl;
	//第一台电脑零件
	CPU* intelCpu = new IntelCPU;
	GPU* intelGpu = new IntelGPU;
	Memory* intelMem = new IntelMemory;

	//第一台电组装
	Computer* computer1 = new Computer(intelCpu, intelGpu, intelMem);
	computer1->work();
	delete computer1;

	cout << "------------------------" << endl;
	cout << "第二台电脑开始工作：" << endl;

	//第二台电脑零件
	/*CPU* lenovoCpu = new  LenovoCPU;
	GPU* lenovoGpu = new  LenovoGPU;
	Memory* lenovoMem = new  LenovoMemory;*/

	//第二胎电脑组装
	Computer* computer2 = new Computer(new  LenovoCPU, new  LenovoGPU, new  LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "------------------------" << endl;
	cout << "第三台电脑开始工作：" << endl;
	//第三胎电脑组装
	Computer* computer3 = new Computer(new  IntelCPU, new  IntelGPU, new  LenovoMemory);
	computer3->work();
	delete computer3;

}


int main() {

	test01();




	system("pause");
	return 0;
}