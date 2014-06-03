#ifdef DLL_FILE

extern int _declspec(dllexport) dllGlobalVar;
extern "C" int _declspec(dllexport) add(int x, int y);

#else

extern int _declspec(dllimport) dllGlobalVar;
extern "C" int _declspec(dllimport) add(int x, int y);

#endif
