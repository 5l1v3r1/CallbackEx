#pragma once

#ifndef CM_H
#define CM_H


// WIN7���ϵ�CMCALLBACK�ṹ��
typedef struct _CM_CALLBACK_ENTRY
{
	LIST_ENTRY  ListEntryHead;
	ULONG   UnKnown1;
	ULONG   UnKnown2;
	LARGE_INTEGER Cookie;
	ULONG_PTR   Context;
	ULONG_PTR   Function;
	UNICODE_STRING Attidute;
	LIST_ENTRY Res;
}CM_CALLBACK_ENTRY, *PCM_CALLBACK_ENTRY;


//ö��RegisterCallback
NTSTATUS EnumCmRegisterCallback();

#endif