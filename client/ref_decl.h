// Autogenerated file: do not modify

typedef struct {
	int		struc_size;
	int		api_version;
	void	(*_Cmd_AddCommand) (char *name, void(*func)(void));
	void	(*_Cmd_RemoveCommand) (char *name);
	int	(*_Cmd_Argc) (void);
	char*	(*_Cmd_Argv) (int i);
	char*	(*_Cmd_Args) (void);
	void	(*_Cbuf_ExecuteText) (int exec_when, char *text);
	cvar_t*	(*_Cvar_Get) (char *name, char *value, int flags);
	void	(*_Cvar_GetVars) (cvarInfo_t *vars, int count);
	cvar_t*	(*_Cvar_Set) (char *name, char *value);
	cvar_t*	(*_Cvar_SetValue) (char *name, float value);
	cvar_t*	(*_Cvar_SetInteger) (char *name, int value);
	char*	(*_Cvar_VariableString) (char *name);
	float	(*_Cvar_VariableValue) (char *name);
	int	(*_Cvar_VariableInt) (char *name);
	float	(*_Cvar_Clamp) (cvar_t *cvar, float low, float high);
	float	(*_Cvar_ClampName) (char *name, float low, float high);
	void*	(*_Z_Malloc) (int size);
	void	(*_Z_Free) (void *ptr);
	void*	(*_CreateMemoryChain) (void);
	void*	(*_AllocChainBlock) (void *chain, int size);
	void	(*_FreeMemoryChain) (void *chain);
	void*	(*_Hunk_Begin) (int maxsize);
	void*	(*_Hunk_Alloc) (int size);
	int	(*_Hunk_End) (void);
	void	(*_Hunk_Free) (void *buf);
	int	(*_Sys_Milliseconds) (void);
	void	(*_Sys_Mkdir) (char *path);
	void	(*_Com_Printf) (char *str, ...);
	void	(*_Com_DPrintf) (char *str, ...);
	void	(*_Com_WPrintf) (char *str, ...);
	void	(*_Com_Error) (int err_level, char *str, ...);
	qboolean	(*_FS_FileExists) (char *filename);
	basenamed_t*	(*_FS_ListFiles) (char *name, int *numfiles, unsigned musthave, unsigned canthave);
	int	(*_FS_LoadFile) (char *name, void **buf);
	void	(*_FS_FreeFile) (void *buf);
	char*	(*_FS_Gamedir) (void);
	qboolean	(*_MatchWildcard) (char *name, char *mask);
	qboolean	(*_Vid_GetModeInfo) (int *width, int *height, int mode);
	void	(*_Vid_MenuInit) (void);
	void	(*_Vid_NewWindow) (int width, int height);
	int	(*_ImageExists) (char *name, int stop_mask);
	void	(*_LoadPCX) (char *filename, byte **pic, byte **palette, int *width, int *height);
	void	(*_LoadTGA) (char *name, byte **pic, int *width, int *height);
	void	(*_LoadJPG) (char *name, byte **pic, int *width, int *height);
	qboolean	(*_WriteTGA) (char *name, byte *pic, int width, int height);
	qboolean	(*_WriteJPG) (char *name, byte *pic, int width, int height, qboolean highQuality);
	bspfile_t*	(*_LoadBspFile) (char *filename, qboolean clientload, unsigned *checksum);
} refImport_t;

extern refImport_t ri;

