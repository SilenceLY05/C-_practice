#ifndef __SOCKETCLENT_H__

#define __SOCKETCLENT_H__

#ifdef __cplusplus
extern "C" {
#endif

	//socket�ͻ��˳�ʼ��
	int socketclent_int(void** handle);

	//socket�ͻ��˱��ķ���
	int socketclent_send(void* handle, unsigned char* buf, int buflen);

	//socket�ͻ��˱��Ľ���
	int socketclent_recv(void* handle, unsigned char* buf, int* buflen);

	//socket�ͻ��˻����ͷ�
	int socketclent_destory(void* handle);

#ifdef  __cplusplus
}
#endif

#endif /* __SOCKETCLENT_H__ */