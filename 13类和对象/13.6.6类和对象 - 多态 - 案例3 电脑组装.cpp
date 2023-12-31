#include<iostream>
using namespace std;
#include <string>

//抽象CPU类
class CPU
{
public:
	//抽象计算函数
	virtual void calculate() = 0;

};

//抽象显卡类
class VideoCard
{
public:
	//抽象显示函数
	virtual void display() = 0;

};

//抽象内存条类
class Memory
{
public:
	//抽象存储类
	virtual void storage() = 0;

};

//电脑类
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * videocard, Memory * memory)
	{
		m_cpu = cpu;
		m_videocard = videocard;
		m_memory = memory;
	}

	//提供工作的函数
	void Work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();

		m_videocard->display();

		m_memory->storage();
	}

	//提供析构函数释放三个电脑零件
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//释放显卡零件
		if (m_videocard != NULL)
		{
			delete m_videocard;
			m_videocard = NULL;
		}

		//释放内存条零件
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}


private:
	CPU * m_cpu;//CPU的零件指针

	VideoCard * m_videocard;//显卡的零件指针

	Memory * m_memory;//内存条零件指针
};

//具体零件厂商
//Inter厂商
class IntelCpu :public CPU
{
	void calculate()
	{
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	void display ()
	{
		cout << "Intel的显卡开始播放了" << endl;
	}
};

class IntelMemory :public Memory
{
	void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
	
};

//Lenovo厂商
class LenovoCpu :public CPU
{
	void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
	void display()
	{
		cout << "Lenovo的显卡开始播放了" << endl;
	}
};

class LenovoMemory :public Memory
{
	void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}

};

void test01()
{
	//第一台电脑的零件
	CPU * intelcpu = new IntelCpu;

	VideoCard * intelcard = new IntelVideoCard;

	Memory * intelmemory = new IntelMemory;

	//创建第一台电脑
	Computer * computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->Work();
	delete computer1;

	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
	computer2->Work();
	delete computer2;

	
	

	//创建第三台电脑
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