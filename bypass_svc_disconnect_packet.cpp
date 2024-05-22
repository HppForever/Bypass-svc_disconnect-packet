void SVC_Disconnect()
{
	MSG_SaveReadCount();

	if (cvar.console.other.block_svc_disconnect_packet && !g_Globals.m_bUnloadLibrary)
	{
		MSG_ReadString();
		return;
	}

	MSG_RestoreReadCount();
	g_ClientEngineMsgsMap[svc_disconnect]();
}

// Don't forget hooking)
