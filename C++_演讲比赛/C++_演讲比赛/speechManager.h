#pragma once

#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
#include<string>
#include <map>
#include<list>
#include "speaker.h"
#include <deque>
#include<numeric>
#include <fstream>



//class speechManager
//{
//public:
//	speechManager();
//
//	void ShowMenu();
//
//	void ExitSystem();
//
//	//成员属性
//	//所有参赛者 12人
//	vector<int> v1;
//
//	//第一轮获胜者6人
//	vector<int> v2;
//
//	//胜利前三名
//	vector<int> vVictory;
//
//	//存放编号 以及对应的选手
//	map<int, Speaker> m_Speaker;
//
//	//比赛轮数
//	int m_Index;
//
//	//初始化容器和属性
//	void InitSpeech();
//
//	//创建选手
//	void CreatSpeaker();
//
//	//开始比赛
//	void StartSpeech();
//
//	//抽签
//	void SpeechDraw();
//
//	//比赛
//	void SpeechContest();
//
//	//显示比赛结果
//	void ShowScore();
//
//	//保存记录
//	void SaveRecord();
//
//	//读取记录
//	void LoadRecord();
//
//	//文件为空的标志
//	bool FileIsEmpty;
//
//	//往届记录
//	map<int, vector<string>> m_Record;
//
//	//显示往届记录
//	void ShowRecord();
//
//	//清空记录
//	void ClearRecord();
//
//	~speechManager();
//
//	string m_Name;
//	double m_Score;
//};

class SpeechManger
{
public:
	SpeechManger();

	void Menu();

	void ExitSystem();

	//成员属性
	//成员12人
	vector<int> v1;

	//第一轮出线人员6人
	vector<int> v2;

	//前三名
	vector<int> vVectory;

	//成员
	map<int, Speaker> m_Speaker;

	//比赛轮数
	int m_Index;

	//初始化
	void InitSpeaker();

	//创建成员
	void CreatPerson();

	//开始比赛
	void StartSpeech();

	//抽签
	void StartDraw();

	//比赛
	void SpeechContest();
	
	//显示比赛结果
	void ShowScore();

	//保存记录
	void SaveRecord();

	//读取记录
	void LoadRecord();

	//文件为空的标志
	bool FileIsEmpty;

	//往届记录
	map<int, vector<string>> m_Record;

	//显示往届记录
	void ShowRecord();

	//清空记录
	void ClearRecord();


	~SpeechManger();
};