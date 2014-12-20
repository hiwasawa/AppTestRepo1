// AppTestRepo1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Hello world!\n");
	-printf("Hello Mike");
	+printf("Hello Mike Mike");

	getchar();
	return 0;
}

