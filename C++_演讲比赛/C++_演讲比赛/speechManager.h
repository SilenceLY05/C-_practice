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
//	//��Ա����
//	//���в����� 12��
//	vector<int> v1;
//
//	//��һ�ֻ�ʤ��6��
//	vector<int> v2;
//
//	//ʤ��ǰ����
//	vector<int> vVictory;
//
//	//��ű�� �Լ���Ӧ��ѡ��
//	map<int, Speaker> m_Speaker;
//
//	//��������
//	int m_Index;
//
//	//��ʼ������������
//	void InitSpeech();
//
//	//����ѡ��
//	void CreatSpeaker();
//
//	//��ʼ����
//	void StartSpeech();
//
//	//��ǩ
//	void SpeechDraw();
//
//	//����
//	void SpeechContest();
//
//	//��ʾ�������
//	void ShowScore();
//
//	//�����¼
//	void SaveRecord();
//
//	//��ȡ��¼
//	void LoadRecord();
//
//	//�ļ�Ϊ�յı�־
//	bool FileIsEmpty;
//
//	//�����¼
//	map<int, vector<string>> m_Record;
//
//	//��ʾ�����¼
//	void ShowRecord();
//
//	//��ռ�¼
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

	//��Ա����
	//��Ա12��
	vector<int> v1;

	//��һ�ֳ�����Ա6��
	vector<int> v2;

	//ǰ����
	vector<int> vVectory;

	//��Ա
	map<int, Speaker> m_Speaker;

	//��������
	int m_Index;

	//��ʼ��
	void InitSpeaker();

	//������Ա
	void CreatPerson();

	//��ʼ����
	void StartSpeech();

	//��ǩ
	void StartDraw();

	//����
	void SpeechContest();
	
	//��ʾ�������
	void ShowScore();

	//�����¼
	void SaveRecord();

	//��ȡ��¼
	void LoadRecord();

	//�ļ�Ϊ�յı�־
	bool FileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//��ʾ�����¼
	void ShowRecord();

	//��ռ�¼
	void ClearRecord();


	~SpeechManger();
};