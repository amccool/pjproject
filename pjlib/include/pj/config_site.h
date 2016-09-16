/**
 *
 *  https://trac.pjsip.org/repos/wiki/Getting-Started/Build-Preparation
 */


#define PJ_DLL
#define PJ_EXPORTING
#define PJ_EXPORT_SPECIFIER  __declspec(dllexport)
#define PJ_IMPORT_SPECIFIER  __declspec(dllimport)

/*
#define PJ_DLL  1
#ifdef _LIB
#	define PJ_EXPORTING 1
#endif
*/
