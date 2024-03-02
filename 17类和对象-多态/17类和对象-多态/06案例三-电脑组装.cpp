#include <iostream>
using namespace std;

//����ͬ�����
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;

};

//�����Կ���
class GPU
{
public:
	//�������ʾ��������
	virtual void display() = 0;

};

//�����ڴ�����
class Memory
{
public:
	//����Ĵ��溯��
	virtual void storage() = 0;

};

//������
class Computer
{
public:
	Computer(CPU* cpu, GPU* gpu, Memory* mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//����������������ýӿ�
		m_cpu->calculate();

		m_gpu->display();

		m_mem->storage();
	}

	//�ṩ�������� �ͷ�3���������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ����
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}

	}

private:

	CPU* m_cpu;//CPU�����ָ��
	GPU* m_gpu;//�Կ������ָ��
	Memory* m_mem;//�ڴ������ָ��
};

//���峧��
//Intel����
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};

class IntelGPU :public GPU
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�����ˣ�" << endl;
	}
};


//Lenovo����

class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};

class LenovoGPU :public GPU
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�����ˣ�" << endl;
	}
};


void test01()
{
	cout << "��һ̨���Կ�ʼ������" << endl;
	//��һ̨�������
	CPU* intelCpu = new IntelCPU;
	GPU* intelGpu = new IntelGPU;
	Memory* intelMem = new IntelMemory;

	//��һ̨����װ
	Computer* computer1 = new Computer(intelCpu, intelGpu, intelMem);
	computer1->work();
	delete computer1;

	cout << "------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ������" << endl;

	//�ڶ�̨�������
	/*CPU* lenovoCpu = new  LenovoCPU;
	GPU* lenovoGpu = new  LenovoGPU;
	Memory* lenovoMem = new  LenovoMemory;*/

	//�ڶ�̥������װ
	Computer* computer2 = new Computer(new  LenovoCPU, new  LenovoGPU, new  LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "------------------------" << endl;
	cout << "����̨���Կ�ʼ������" << endl;
	//����̥������װ
	Computer* computer3 = new Computer(new  IntelCPU, new  IntelGPU, new  LenovoMemory);
	computer3->work();
	delete computer3;

}


int main() {

	test01();




	system("pause");
	return 0;
}