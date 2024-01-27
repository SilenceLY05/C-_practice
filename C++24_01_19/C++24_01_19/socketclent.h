#ifndef __SOCKETCLENT_H__

#define __SOCKETCLENT_H__

#ifdef __cplusplus
extern "C" {
#endif

	//socket客户端初始化
	int socketclent_int(void** handle);

	//socket客户端报文发送
	int socketclent_send(void* handle, unsigned char* buf, int buflen);

	//socket客户端报文接受
	int socketclent_recv(void* handle, unsigned char* buf, int* buflen);

	//socket客户端环境释放
	int socketclent_destory(void* handle);

#ifdef  __cplusplus
}
#endif

#endif /* __SOCKETCLENT_H__ */