// Autogenerated file: do not modify

#ifdef DYNAMIC_REF

inline bool RegisterCommand (const char *name, void(*func)(), int flags)
{
	return ri._RegisterCommand (name, func, flags);
}
inline void UnregisterCommand (const char *name)
{
	ri._UnregisterCommand (name);
}
inline cvar_t* Cvar_Get (const char *name, const char *value, int flags)
{
	return ri._Cvar_Get (name, value, flags);
}
inline void Cvar_GetVars (const cvarInfo_t *vars, int count)
{
	ri._Cvar_GetVars (vars, count);
}
inline cvar_t* Cvar_Set (const char *name, const char *value)
{
	return ri._Cvar_Set (name, value);
}
inline cvar_t* Cvar_SetValue (const char *name, float value)
{
	return ri._Cvar_SetValue (name, value);
}
inline cvar_t* Cvar_SetInteger (const char *name, int value)
{
	return ri._Cvar_SetInteger (name, value);
}
inline char* Cvar_VariableString (const char *name)
{
	return ri._Cvar_VariableString (name);
}
inline float Cvar_VariableValue (const char *name)
{
	return ri._Cvar_VariableValue (name);
}
inline int Cvar_VariableInt (const char *name)
{
	return ri._Cvar_VariableInt (name);
}
inline float Cvar_Clamp (cvar_t *cvar, float low, float high)
{
	return ri._Cvar_Clamp (cvar, low, high);
}
inline float Cvar_ClampName (const char *name, float low, float high)
{
	return ri._Cvar_ClampName (name, low, high);
}
inline void* appMalloc (int size)
{
	return ri._appMalloc (size);
}
inline void appFree (void *ptr)
{
	ri._appFree (ptr);
}
inline void* CreateMemoryChain (void)
{
	return ri._CreateMemoryChain ();
}
inline void* AllocChainBlock (void *chain, int size)
{
	return ri._AllocChainBlock (chain, size);
}
inline void FreeMemoryChain (void *chain)
{
	ri._FreeMemoryChain (chain);
}
inline void* Hunk_Begin (int maxsize)
{
	return ri._Hunk_Begin (maxsize);
}
inline void* Hunk_Alloc (int size)
{
	return ri._Hunk_Alloc (size);
}
inline int Hunk_End (void)
{
	return ri._Hunk_End ();
}
inline void Hunk_Free (void *buf)
{
	ri._Hunk_Free (buf);
}
inline int Sys_Milliseconds (void)
{
	return ri._Sys_Milliseconds ();
}
#define Com_Printf	ri._Com_Printf
#define Com_DPrintf	ri._Com_DPrintf
#define Com_WPrintf	ri._Com_WPrintf
#define Com_FatalError	ri._Com_FatalError
#define Com_DropError	ri._Com_DropError
#ifdef _WIN32
inline int win32ExceptFilter2 (void)
{
	return ri._win32ExceptFilter2 ();
}
#endif
inline void appUnwindPrefix (const char *fmt)
{
	ri._appUnwindPrefix (fmt);
}
#define appUnwindThrow	ri._appUnwindThrow
inline bool FS_FileExists (char *filename)
{
	return ri._FS_FileExists (filename);
}
inline basenamed_t* FS_ListFiles (char *name, int *numfiles, int flags)
{
	return ri._FS_ListFiles (name, numfiles, flags);
}
inline void* FS_LoadFile (const char *name, unsigned *size = NULL)
{
	return ri._FS_LoadFile (name, NULL);
}
inline void FS_FreeFile (void *buf)
{
	ri._FS_FreeFile (buf);
}
inline char* FS_Gamedir (void)
{
	return ri._FS_Gamedir ();
}
inline void FS_CreatePath (char *path)
{
	ri._FS_CreatePath (path);
}
inline void FS_CopyFile (char *src, char *dst)
{
	ri._FS_CopyFile (src, dst);
}
inline void FS_CopyFiles (char *srcMask, char *dstDir)
{
	ri._FS_CopyFiles (srcMask, dstDir);
}
inline void FS_RemoveFiles (char *mask)
{
	ri._FS_RemoveFiles (mask);
}
inline bool MatchWildcard (const char *name, const char *mask, bool ignoreCase = false)
{
	return ri._MatchWildcard (name, mask, false);
}
#define va	ri._va
#define appSprintf	ri._appSprintf
inline bool Vid_GetModeInfo (int *width, int *height, int mode)
{
	return ri._Vid_GetModeInfo (width, height, mode);
}
inline int ImageExists (const char *name, int stop_mask = IMAGE_ANY)
{
	return ri._ImageExists (name, IMAGE_ANY);
}
inline void LoadPCX (const char *name, byte **pic, byte **palette, int *width, int *height)
{
	ri._LoadPCX (name, pic, palette, width, height);
}
inline void LoadTGA (const char *name, byte **pic, int *width, int *height)
{
	ri._LoadTGA (name, pic, width, height);
}
inline void LoadJPG (const char *name, byte **pic, int *width, int *height)
{
	ri._LoadJPG (name, pic, width, height);
}
inline bool WriteTGA (const char *name, byte *pic, int width, int height)
{
	return ri._WriteTGA (name, pic, width, height);
}
inline bool WriteJPG (const char *name, byte *pic, int width, int height, bool highQuality)
{
	return ri._WriteJPG (name, pic, width, height, highQuality);
}
inline bspfile_t* LoadBspFile (const char *filename, bool clientload, unsigned *checksum)
{
	return ri._LoadBspFile (filename, clientload, checksum);
}
inline void CM_BoxTrace (trace_t *tr, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, int headnode, int brushmask)
{
	ri._CM_BoxTrace (tr, start, end, mins, maxs, headnode, brushmask);
}
inline void CM_TransformedBoxTrace (trace_t *tr, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, int headnode, int brushmask, const vec3_t origin, const vec3_t angles)
{
	ri._CM_TransformedBoxTrace (tr, start, end, mins, maxs, headnode, brushmask, origin, angles);
}
inline void CM_TransformedBoxTrace2 (trace_t *tr, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, int headnode, int brushmask, const vec3_t origin, const vec3_t *axis)
{
	ri._CM_TransformedBoxTrace2 (tr, start, end, mins, maxs, headnode, brushmask, origin, axis);
}
inline int CM_BrushTrace (const vec3_t start, const vec3_t end, int *brushes, int maxBrushes)
{
	return ri._CM_BrushTrace (start, end, brushes, maxBrushes);
}
inline int CM_RefineBrushTrace (const vec3_t start, const vec3_t end, int *brushes, int numBrushes)
{
	return ri._CM_RefineBrushTrace (start, end, brushes, numBrushes);
}
#ifdef _WIN32
inline void* Vid_CreateWindow (int width, int height, bool fullscreen)
{
	return ri._Vid_CreateWindow (width, height, fullscreen);
}
inline void Vid_DestroyWindow (bool force)
{
	ri._Vid_DestroyWindow (force);
}
#else
inline void Vid_NewWindow (int width, int height)
{
	ri._Vid_NewWindow (width, height);
}
#endif

#else

bool	RegisterCommand (const char *name, void(*func)(), int flags);
void	UnregisterCommand (const char *name);
cvar_t*	Cvar_Get (const char *name, const char *value, int flags);
void	Cvar_GetVars (const cvarInfo_t *vars, int count);
cvar_t*	Cvar_Set (const char *name, const char *value);
cvar_t*	Cvar_SetValue (const char *name, float value);
cvar_t*	Cvar_SetInteger (const char *name, int value);
char*	Cvar_VariableString (const char *name);
float	Cvar_VariableValue (const char *name);
int	Cvar_VariableInt (const char *name);
float	Cvar_Clamp (cvar_t *cvar, float low, float high);
float	Cvar_ClampName (const char *name, float low, float high);
void*	appMalloc (int size);
void	appFree (void *ptr);
void*	CreateMemoryChain (void);
void*	AllocChainBlock (void *chain, int size);
void	FreeMemoryChain (void *chain);
void*	Hunk_Begin (int maxsize);
void*	Hunk_Alloc (int size);
int	Hunk_End (void);
void	Hunk_Free (void *buf);
int	Sys_Milliseconds (void);
void	Com_Printf (const char *str, ...);
void	Com_DPrintf (const char *str, ...);
void	Com_WPrintf (const char *str, ...);
void	NORETURN	Com_FatalError (const char *fmt, ...);
void 	NORETURN	Com_DropError (const char *fmt, ...);
#ifdef _WIN32
int	win32ExceptFilter2 (void);
#endif
void	appUnwindPrefix (const char *fmt);
void	NORETURN	appUnwindThrow (const char *fmt, ...);
bool	FS_FileExists (char *filename);
basenamed_t*	FS_ListFiles (char *name, int *numfiles, int flags);
void*	FS_LoadFile (const char *name, unsigned *size = NULL);
void	FS_FreeFile (void *buf);
char*	FS_Gamedir (void);
void	FS_CreatePath (char *path);
void	FS_CopyFile (char *src, char *dst);
void	FS_CopyFiles (char *srcMask, char *dstDir);
void	FS_RemoveFiles (char *mask);
bool	MatchWildcard (const char *name, const char *mask, bool ignoreCase = false);
char*	va (const char *format, ...);
int	appSprintf (char *dest, int size, const char *fmt, ...);
bool	Vid_GetModeInfo (int *width, int *height, int mode);
int	ImageExists (const char *name, int stop_mask = IMAGE_ANY);
void	LoadPCX (const char *name, byte **pic, byte **palette, int *width, int *height);
void	LoadTGA (const char *name, byte **pic, int *width, int *height);
void	LoadJPG (const char *name, byte **pic, int *width, int *height);
bool	WriteTGA (const char *name, byte *pic, int width, int height);
bool	WriteJPG (const char *name, byte *pic, int width, int height, bool highQuality);
bspfile_t*	LoadBspFile (const char *filename, bool clientload, unsigned *checksum);
void	CM_BoxTrace (trace_t *tr, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, int headnode, int brushmask);
void	CM_TransformedBoxTrace (trace_t *tr, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, int headnode, int brushmask, const vec3_t origin, const vec3_t angles);
void	CM_TransformedBoxTrace2 (trace_t *tr, const vec3_t start, const vec3_t end, const vec3_t mins, const vec3_t maxs, int headnode, int brushmask, const vec3_t origin, const vec3_t *axis);
int	CM_BrushTrace (const vec3_t start, const vec3_t end, int *brushes, int maxBrushes);
int	CM_RefineBrushTrace (const vec3_t start, const vec3_t end, int *brushes, int numBrushes);
#ifdef _WIN32
void*	Vid_CreateWindow (int width, int height, bool fullscreen);
void	Vid_DestroyWindow (bool force);
#else
void	Vid_NewWindow (int width, int height);
#endif

#endif

