#include<iostream>
using namespace std;
#include <string>

//����CPU��
class CPU
{
public:
	//������㺯��
	virtual void calculate() = 0;

};

//�����Կ���
class VideoCard
{
public:
	//������ʾ����
	virtual void display() = 0;

};

//�����ڴ�����
class Memory
{
public:
	//����洢��
	virtual void storage() = 0;

};

//������
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * videocard, Memory * memory)
	{
		m_cpu = cpu;
		m_videocard = videocard;
		m_memory = memory;
	}

	//�ṩ�����ĺ���
	void Work()
	{
		//������������������ýӿ�
		m_cpu->calculate();

		m_videocard->display();

		m_memory->storage();
	}

	//�ṩ���������ͷ������������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//�ͷ��Կ����
		if (m_videocard != NULL)
		{
			delete m_videocard;
			m_videocard = NULL;
		}

		//�ͷ��ڴ������
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}


private:
	CPU * m_cpu;//CPU�����ָ��

	VideoCard * m_videocard;//�Կ������ָ��

	Memory * m_memory;//�ڴ������ָ��
};

//�����������
//Inter����
class IntelCpu :public CPU
{
	void calculate()
	{
		cout << "Intel��CPU��ʼ������" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	void display ()
	{
		cout << "Intel���Կ���ʼ������" << endl;
	}
};

class IntelMemory :public Memory
{
	void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��" << endl;
	}
	
};

//Lenovo����
class LenovoCpu :public CPU
{
	void calculate()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
	void display()
	{
		cout << "Lenovo���Կ���ʼ������" << endl;
	}
};

class LenovoMemory :public Memory
{
	void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
	}

};

void test01()
{
	//��һ̨���Ե����
	CPU * intelcpu = new IntelCpu;

	VideoCard * intelcard = new IntelVideoCard;

	Memory * intelmemory = new IntelMemory;

	//������һ̨����
	Computer * computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->Work();
	delete computer1;

	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
	computer2->Work();
	delete computer2;

	
	

	//��������̨����
	Computer* computer3 = new Computer(new IntelCpu, new LenovoVideoCard, new LenovoMemory);
	computer3->Work();
	delete computer3;


}

int main()
{

	test01();
	system("pause");
	return 0;
}