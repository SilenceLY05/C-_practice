#include "speechManager.h"

//speechManager::speechManager()
//{
//	this->InitSpeech();
//
//	this->CreatSpeaker();
//
//	this->LoadRecord();
//}
//
//void speechManager::ShowMenu()
//{
//	cout << "****************************" << endl;
//	cout << "****  欢迎参加演讲比赛  ****" << endl;
//	cout << "****  1.开始演讲比赛    ****" << endl;
//	cout << "****  2.查看往届记录    ****" << endl;
//	cout << "****  3.清空比赛记录    ****" << endl;
//	cout << "****  0.退出比赛记录    ****" << endl;
//	cout << "****************************" << endl;
//	cout << endl;
//}
//
//void speechManager::InitSpeech()
//{
//	this->v1.clear();
//	this->v2.clear();
//	this->vVictory.clear();
//	this->m_Index = 1;
//	this->m_Speaker.clear();
//	this->m_Record.clear();
//}
//
//void speechManager::CreatSpeaker()
//{
//	string namespeed = "ABCDEFGHIJKL";
//	for (int i = 0; i < namespeed.size(); i++)
//	{
//		string name = "选手";
//		name += namespeed[i];
//
//		Speaker sp;
//		sp.m_Name = name;
//
//		for (int j = 0; j < 2; j++)
//		{
//			sp.m_Score[j] = 0;
//		}
//
//		this->v1.push_back(i + 10001);
//
//		this->m_Speaker.insert(pair<int, Speaker>(i + 10001, sp));
//	}
//}
//
//
//void speechManager::SpeechDraw()
//{
//	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
//	cout << "---------------------------" << endl;
//	cout << "抽签结果顺序如下：" << endl;
//	if (this->m_Index == 1)
//	{
//		random_shuffle(v1.begin(), v1.end());
//		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//		{
//			cout << *it << "  ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		random_shuffle(v2.begin(), v2.end());
//		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
//		{
//			cout << *it << "  ";
//		}
//		cout << endl;
//	}
//
//	cout << "---------------------------" << endl;
//	system("pause");
//	cout << endl;
//}
//
//void speechManager::SpeechContest()
//{
//	cout << "-------------- 第" << this->m_Index << "轮比赛正式开始 --------------" << endl;
//
//	multimap<double, int, greater<double>> GroupScore;//临时容器，保存分数
//
//	int num = 0;
//	vector<int> v_Src;
//	if (this->m_Index == 1)
//	{
//		v_Src = v1;
//	}
//	else
//	{
//		v_Src = v2;
//	}
//
//	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
//	{
//		num++;
//
//		//评委打分
//		deque<double> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = (rand() % 401 + 600) / 10.f;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end(), greater<double>());//排序
//		d.pop_back();//去除最低分
//		d.pop_front();//去除最高分
//		double ret = accumulate(d.begin(), d.end(), 0.0f);
//		double avg = ret / (double)d.size();
//		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;
//
//		GroupScore.insert(make_pair(avg, (*it)));
//
//		if (num % 6 == 0)
//		{
//			cout << "第" << num / 6 << "小组赛名次：" << endl;
//
//			for (multimap<double, int, greater<double>>::iterator it = GroupScore.begin(); 
//				it != GroupScore.end(); it++)
//			{
//				cout << "编号：" << (*it).second << "  姓名：" << this->m_Speaker[it->second].m_Name << "  成绩：" <<
//					this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
//			}
//
//			int count = 0;
//
//			for (multimap<double, int, greater<double>>::iterator it = GroupScore.begin(); 
//				it != GroupScore.end() && count < 3; it++, count++)
//			{
//				if (this->m_Index == 1)
//				{
//					v2.push_back((*it).second);
//				}
//				else
//				{
//					vVictory.push_back((*it).second);
//				}
//			}
//			GroupScore.clear();
//
//			cout << endl;
//		}
//	}
//	cout << "-------------- 第" << this->m_Index << "轮比赛正式结束 --------------" << endl;
//	system("pause");
//}
//
//void speechManager::ShowScore()
//{
//	cout << "-------------- 第" << this->m_Index << "轮晋级选手如下： --------------" << endl;
//	vector<int>v;
//	if (this->m_Index == 1)
//	{
//		v = v2;
//	}
//	else
//	{
//		v = vVictory;
//	}
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "选手编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_Name << "  分数：" <<
//			this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
//	}
//
//	system("pause");
//	system("cls");
//	this->ShowMenu();
//}
//
//void speechManager::SaveRecord()
//{
//	ofstream ofs;
//
//	ofs.open("speech.csv", ios::out | ios::app);//用追加的方式写文件
//
//	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
//	{
//		ofs << (*it) << "," << this->m_Speaker[*it].m_Score[1] << ",";
//	}
//	ofs << endl;
//
//	ofs.close();
//
//	cout << "记录以及保存完毕" << endl;
//
//	//有记录了
//	this->FileIsEmpty = false;
//}
//
//
//
//void speechManager::StartSpeech()
//{
//	//第一轮比赛
//	//1.抽签
//	this->SpeechDraw();
//
//	//2.比赛
//	this->SpeechContest();
//	//3.显示晋级结果
//	this->ShowScore();
//
//	//第二轮比赛
//	this->m_Index++;
//	//1.抽签
//	this->SpeechDraw();
//	//2.比赛
//	this->SpeechContest();
//	//3.显示最终结果
//	this->ShowScore();
//	//4.保存结果
//	this->SaveRecord();
//
//	//重置比赛 不然结束后查不到当届比赛记录
//	this->InitSpeech();
//
//	this->CreatSpeaker();
//
//	this->LoadRecord();
//
//	cout << "本届比赛完毕" << endl;
//	system("pause");
//	system("cls");
//}
//
//void speechManager::LoadRecord()
//{
//	ifstream ifs("speech.csv", ios::in);//输入流对象，读取文件
//
//	if (!ifs.is_open())
//	{
//		this->FileIsEmpty = true;
//		cout << "文件不存在！" << endl;
//		ifs.close();
//		return;
//	}
//
//	char ch;
//	ifs >> ch;
//	if (ifs.eof())
//	{
//		cout << "文件为空！" << endl;
//		this->FileIsEmpty = true;
//		ifs.close();
//		return;
//	}
//
//	//文件不为空
//	this->FileIsEmpty = false;
//	ifs.putback(ch);  //读取的单个字符放回去
//
//	string data;
//	int index = 0;
//	while (ifs >> data)
//	{
//		vector<string> v;//存放6个字符串
//		int pos = -1;//查到逗号位置的变量
//		int start = 0;
//
//		while (true)
//		{
//			pos = data.find(",", start);
//			if (pos == -1)
//			{
//				//没有找到
//				break;
//			}
//			string temp = data.substr(start, pos - start);
//			//cout << temp << endl;
//			v.push_back(temp);
//
//			start = pos + 1;
//		}
//		this->m_Record.insert(make_pair(index, v));
//		index++;
//
//	}
//
//	ifs.close();
//
//	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
//	//{
//	//	cout << "第" << (*it).first << "届比赛：" << endl;
//	//	cout << "冠军：" << (*it).second[0] << "  分数：" << (*it).second[1] << endl;
//	//}
//
//}
//
//void speechManager::ShowRecord()
//{
//	if (this->FileIsEmpty)
//	{
//		cout << "文件不存在或记录为空！" << endl;
//	}
//	else
//	{
//		for (int i = 0; i < this->m_Record.size(); i++)
//		{
//			cout << "第" << i + 1 << "届   " <<
//				"冠军编号：" << this->m_Record[i][0] << "  得分：" << this->m_Record[i][1] << "  " <<
//				"亚军编号：" << this->m_Record[i][2] << "  得分：" << this->m_Record[i][3] << "  " <<
//				"季军编号：" << this->m_Record[i][4] << "  得分：" << this->m_Record[i][5] << endl;
//		}
//	}
//	
//	system("pause");
//	system("cls");
//}
//
//void speechManager::ClearRecord()
//{
//	cout << "确认清空？" << endl;
//	cout << "1.确认" << endl;
//	cout << "2.取消" << endl;
//
//	int select = 0;
//	cin >> select;
//
//	if (select == 1)
//	{
//		//打开模式 ios::trunc如果存在删除文件并重新创建
//		ofstream ofs("speech.csv", ios::trunc);
//		ofs.close();
//
//		//初始化属性
//		this->InitSpeech();
//
//		this->CreatSpeaker();
//
//		this->LoadRecord();
//
//		cout << "清空成功！" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//void speechManager::ExitSystem()
//{
//	cout << "欢迎下次使用！" << endl;
//	system("pause");
//	exit(0);
//}
//
//speechManager::~speechManager()
//{
//
//}

SpeechManger::SpeechManger()
{
	this->InitSpeaker();

	this->CreatPerson();

	this->LoadRecord();
}

void SpeechManger::Menu()
{
	cout << "****************************" << endl;
	cout << "****  欢迎参加演讲比赛  ****" << endl;
	cout << "****  1.开始演讲比赛    ****" << endl;
	cout << "****  2.查看往届记录    ****" << endl;
	cout << "****  3.清空比赛记录    ****" << endl;
	cout << "****  0.退出比赛记录    ****" << endl;
	cout << "****************************" << endl;
	cout << endl;
}

void SpeechManger::InitSpeaker()
{
	this->v1.clear();

	this->v2.clear();

	this->vVectory.clear();

	this->m_Index = 1;

	this->m_Speaker.clear();

	this->m_Record.clear();
}

void SpeechManger::CreatPerson()
{
	string namespeed = "ABCDEFGHIJKL";
	for (int i = 0; i < namespeed.size(); i++)
	{
		string name = "选手";
		name += namespeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[i] = 0;
		}
		this->v1.push_back(i + 10001);

		this->m_Speaker.insert(pair<int, Speaker>(i + 10001, sp));
	}
}


//开始比赛
void SpeechManger::StartSpeech()
{
	//第一次抽签
	this->StartDraw();

	//第一次比赛
	this->SpeechContest();

	//第一次显示结果
	this->ShowScore();

	this->m_Index++;

	//第二次抽签
	this->StartDraw();

	//第二次比赛
	this->SpeechContest();

	//第二次显示前三名
	this->ShowScore();

	//保存记录

	this->SaveRecord();

	this->InitSpeaker();
	this->CreatPerson();
	this->LoadRecord();

	cout << "本届比赛结束" << endl;
	system("pause");
	system("cls");

}


//抽签
void SpeechManger::StartDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
	cout << "---------------------------" << endl;
	cout << "抽签结果顺序如下：" << endl;

	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());

		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << "*it" << "  ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());

		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << "*it" << "  ";
		}
		cout << endl;
	}


	cout << "---------------------------" << endl;
	system("pause");

	cout << endl;
}


//比赛
void SpeechManger::SpeechContest()
{
	cout << "-------------- 第" << this->m_Index << "轮比赛正式开始 --------------" << endl;

	multimap<double, int, greater<double>> GroupScore;//保存分数

	int num = 0;
	vector<int> v_Src;

	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		deque<double> dq;

		for (int i = 0; i < 10; i++)
		{
			double num = (rand() % 401 + 600) / 10.f;
			dq.push_back(num);
		}
		sort(dq.begin(), dq.end(), greater<double>());
		dq.pop_back();
		dq.pop_front();
		double sum = accumulate(dq.begin(), dq.end(), 0.0f);
		double avg = sum / (double)dq.size();

		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		GroupScore.insert(pair<double, int>(avg, *it));

		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组赛名次：" << endl;

			for (multimap<double, int, greater<double>>::iterator it1 = GroupScore.begin();
				it1 != GroupScore.end(); it1++)
			{
				cout << "编号：" << (*it1).second << "  姓名：" << this->m_Speaker[it1->second].m_Name
					<< "  成绩：" << this->m_Speaker[it1->second].m_Score[this->m_Index - 1];
			}

			int count = 0;

			for (multimap<double, int, greater<double>>::iterator it2 = GroupScore.begin();
				it2 != GroupScore.end() && count < 3; it2++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it2).second);
				}
				else
				{
					vVectory.push_back((*it2).second);
				}
			}
			GroupScore.clear();

			cout << endl;
		}
	}
	cout << "-------------- 第" << this->m_Index << "轮比赛正式结束 --------------" << endl;
	system("pause");
}


//显示比赛结果
void SpeechManger::ShowScore()
{
	cout << "-------------- 第" << this->m_Index << "轮晋级选手如下 --------------" << endl;

	vector<int> v;

	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVectory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_Name
			<< "  成绩：" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}

	system("pause");
	system("cls");
	this->Menu();
}


//保存记录
void SpeechManger::SaveRecord()
{
	ofstream ofs;
	ofs.open("speechMember.csv", ios::out | ios::app);//追加的方式写文件


	for (vector<int>::iterator it = vVectory.begin(); it != vVectory.end(); it++)
	{
		ofs << (*it) << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	ofs.close();

	cout << "记录已经保存完毕" << endl;

	this->FileIsEmpty = false;
}

//读取记录
void SpeechManger::LoadRecord()
{
	ifstream ifs("speechMember.csv", ios::in);

	if (!ifs.is_open())
	{
		this->FileIsEmpty = true;
		cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;

	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		this->FileIsEmpty = true;

		ifs.close();
		return;
	}

	//文件不为空
	this->FileIsEmpty = false;

	ifs.putback(ch);

	string data;
	int index = 0;

	while (ifs >> data)
	{
		vector<string> v;

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				break;
			}
			string temp = data.substr(start,pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(pair<int, vector<string>>(index, v));
		index++;
	}

	ifs.close();
}


//显示往届记录
void SpeechManger::ShowRecord()
{
	if (this->FileIsEmpty)
	{
		cout << "文件为空或者不存在！" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届    " << "冠军：" << this->m_Record[i][0] << "  得分：" << this->m_Record[i][1] <<
				"  亚军：" << this->m_Record[i][2] << "  得分：" << this->m_Record[i][3] <<
				"  季军：" << this->m_Record[i][4] << "  得分：" << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

//清空记录
void SpeechManger::ClearRecord()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//打开模式 ios::trunc如果存在删除文件删除并重新创建
		ofstream ofs("speechMember.csv", ios::trunc);
		ofs.close();

		this->InitSpeaker();
		this->CreatPerson();
		this->LoadRecord();

		cout << "清楚成功！" << endl;
	}
	system("pause");
	system("cls");
}



void SpeechManger::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

SpeechManger::~SpeechManger()
{

}