#ifndef TEST_SETTINGS_PROPERTY_LISTS
#define TEST_SETTINGS_PROPERTY_LISTS

#define have_bool_list_indices
static const size_t bool_list_indices[] = {
	FreeRDP_ServerMode,
	FreeRDP_WaitForOutputBufferFlush,
	FreeRDP_NetworkAutoDetect,
	FreeRDP_SupportAsymetricKeys,
	FreeRDP_SupportErrorInfoPdu,
	FreeRDP_SupportStatusInfoPdu,
	FreeRDP_SupportMonitorLayoutPdu,
	FreeRDP_SupportGraphicsPipeline,
	FreeRDP_SupportDynamicTimeZone,
	FreeRDP_SupportHeartbeatPdu,
	FreeRDP_UseRdpSecurityLayer,
	FreeRDP_ConsoleSession,
	FreeRDP_SpanMonitors,
	FreeRDP_UseMultimon,
	FreeRDP_ForceMultimon,
	FreeRDP_ListMonitors,
	FreeRDP_HasMonitorAttributes,
	FreeRDP_SupportMultitransport,
	FreeRDP_AutoLogonEnabled,
	FreeRDP_CompressionEnabled,
	FreeRDP_DisableCtrlAltDel,
	FreeRDP_EnableWindowsKey,
	FreeRDP_MaximizeShell,
	FreeRDP_LogonNotify,
	FreeRDP_LogonErrors,
	FreeRDP_MouseAttached,
	FreeRDP_MouseHasWheel,
	FreeRDP_RemoteConsoleAudio,
	FreeRDP_AudioPlayback,
	FreeRDP_AudioCapture,
	FreeRDP_VideoDisable,
	FreeRDP_PasswordIsSmartcardPin,
	FreeRDP_UsingSavedCredentials,
	FreeRDP_ForceEncryptedCsPdu,
	FreeRDP_HiDefRemoteApp,
	FreeRDP_IPv6Enabled,
	FreeRDP_AutoReconnectionEnabled,
	FreeRDP_PrintReconnectCookie,
	FreeRDP_DynamicDaylightTimeDisabled,
	FreeRDP_AllowFontSmoothing,
	FreeRDP_DisableWallpaper,
	FreeRDP_DisableFullWindowDrag,
	FreeRDP_DisableMenuAnims,
	FreeRDP_DisableThemes,
	FreeRDP_DisableCursorShadow,
	FreeRDP_DisableCursorBlinking,
	FreeRDP_AllowDesktopComposition,
	FreeRDP_RemoteAssistanceMode,
	FreeRDP_EncomspVirtualChannel,
	FreeRDP_RemdeskVirtualChannel,
	FreeRDP_LyncRdpMode,
	FreeRDP_RemoteAssistanceRequestControl,
	FreeRDP_TlsSecurity,
	FreeRDP_NlaSecurity,
	FreeRDP_RdpSecurity,
	FreeRDP_ExtSecurity,
	FreeRDP_Authentication,
	FreeRDP_NegotiateSecurityLayer,
	FreeRDP_RestrictedAdminModeRequired,
	FreeRDP_DisableCredentialsDelegation,
	FreeRDP_VmConnectMode,
	FreeRDP_FIPSMode,
	FreeRDP_MstscCookieMode,
	FreeRDP_SendPreconnectionPdu,
	FreeRDP_SmartcardLogon,
	FreeRDP_PromptForCredentials,
	FreeRDP_IgnoreCertificate,
	FreeRDP_ExternalCertificateManagement,
	FreeRDP_AutoAcceptCertificate,
	FreeRDP_AutoDenyCertificate,
	FreeRDP_Workarea,
	FreeRDP_Fullscreen,
	FreeRDP_GrabKeyboard,
	FreeRDP_Decorations,
	FreeRDP_MouseMotion,
	FreeRDP_AsyncInput,
	FreeRDP_AsyncUpdate,
	FreeRDP_AsyncChannels,
	FreeRDP_ToggleFullscreen,
	FreeRDP_EmbeddedWindow,
	FreeRDP_SmartSizing,
	FreeRDP_PercentScreenUseWidth,
	FreeRDP_PercentScreenUseHeight,
	FreeRDP_DynamicResolutionUpdate,
	FreeRDP_SoftwareGdi,
	FreeRDP_LocalConnection,
	FreeRDP_AuthenticationOnly,
	FreeRDP_CredentialsFromStdin,
	FreeRDP_UnmapButtons,
	FreeRDP_OldLicenseBehaviour,
	FreeRDP_DumpRemoteFx,
	FreeRDP_PlayRemoteFx,
	FreeRDP_GatewayUseSameCredentials,
	FreeRDP_GatewayEnabled,
	FreeRDP_GatewayBypassLocal,
	FreeRDP_GatewayRpcTransport,
	FreeRDP_GatewayHttpTransport,
	FreeRDP_GatewayUdpTransport,
	FreeRDP_RemoteApplicationMode,
	FreeRDP_DisableRemoteAppCapsCheck,
	FreeRDP_RemoteAppLanguageBarSupported,
	FreeRDP_RefreshRect,
	FreeRDP_SuppressOutput,
	FreeRDP_FastPathOutput,
	FreeRDP_SaltedChecksum,
	FreeRDP_LongCredentialsSupported,
	FreeRDP_NoBitmapCompressionHeader,
	FreeRDP_BitmapCompressionDisabled,
	FreeRDP_DesktopResize,
	FreeRDP_DrawAllowDynamicColorFidelity,
	FreeRDP_DrawAllowColorSubsampling,
	FreeRDP_DrawAllowSkipAlpha,
	FreeRDP_BitmapCacheV3Enabled,
	FreeRDP_AltSecFrameMarkerSupport,
	FreeRDP_AllowUnanouncedOrdersFromServer,
	FreeRDP_BitmapCacheEnabled,
	FreeRDP_AllowCacheWaitingList,
	FreeRDP_BitmapCachePersistEnabled,
	FreeRDP_ColorPointerFlag,
	FreeRDP_UnicodeInput,
	FreeRDP_FastPathInput,
	FreeRDP_MultiTouchInput,
	FreeRDP_MultiTouchGestures,
	FreeRDP_HasHorizontalWheel,
	FreeRDP_HasExtendedMouseEvent,
	FreeRDP_SoundBeepsEnabled,
	FreeRDP_SurfaceCommandsEnabled,
	FreeRDP_FrameMarkerCommandEnabled,
	FreeRDP_SurfaceFrameMarkerEnabled,
	FreeRDP_RemoteFxOnly,
	FreeRDP_RemoteFxCodec,
	FreeRDP_RemoteFxImageCodec,
	FreeRDP_NSCodec,
	FreeRDP_NSCodecAllowSubsampling,
	FreeRDP_NSCodecAllowDynamicColorFidelity,
	FreeRDP_JpegCodec,
	FreeRDP_GfxThinClient,
	FreeRDP_GfxSmallCache,
	FreeRDP_GfxProgressive,
	FreeRDP_GfxProgressiveV2,
	FreeRDP_GfxH264,
	FreeRDP_GfxAVC444,
	FreeRDP_GfxSendQoeAck,
	FreeRDP_GfxAVC444v2,
	FreeRDP_DrawNineGridEnabled,
	FreeRDP_DrawGdiPlusEnabled,
	FreeRDP_DrawGdiPlusCacheEnabled,
	FreeRDP_DeviceRedirection,
	FreeRDP_RedirectDrives,
	FreeRDP_RedirectHomeDrive,
	FreeRDP_RedirectSmartCards,
	FreeRDP_RedirectPrinters,
	FreeRDP_RedirectSerialPorts,
	FreeRDP_RedirectParallelPorts,
	FreeRDP_PreferIPv6OverIPv4,
	FreeRDP_RedirectClipboard,
	FreeRDP_SupportDynamicChannels,
	FreeRDP_SupportEchoChannel,
	FreeRDP_SupportDisplayControl,
	FreeRDP_SupportGeometryTracking,
	FreeRDP_SupportSSHAgentChannel,
	FreeRDP_SupportVideoOptimized,
	FreeRDP_TcpKeepAlive,
};

#define have_uint16_list_indices
static const size_t uint16_list_indices[] = {
	FreeRDP_DesktopOrientation,
	FreeRDP_ProxyPort,
};

#define have_uint32_list_indices
static const size_t uint32_list_indices[] = {
	FreeRDP_ShareId,
	FreeRDP_PduSource,
	FreeRDP_ServerPort,
	FreeRDP_MaxTimeInCheckLoop,
	FreeRDP_AcceptedCertLength,
	FreeRDP_RdpVersion,
	FreeRDP_DesktopWidth,
	FreeRDP_DesktopHeight,
	FreeRDP_ColorDepth,
	FreeRDP_ConnectionType,
	FreeRDP_ClientBuild,
	FreeRDP_EarlyCapabilityFlags,
	FreeRDP_DesktopPhysicalWidth,
	FreeRDP_DesktopPhysicalHeight,
	FreeRDP_DesktopScaleFactor,
	FreeRDP_DeviceScaleFactor,
	FreeRDP_EncryptionMethods,
	FreeRDP_ExtEncryptionMethods,
	FreeRDP_EncryptionLevel,
	FreeRDP_ServerRandomLength,
	FreeRDP_ServerCertificateLength,
	FreeRDP_ClientRandomLength,
	FreeRDP_ChannelCount,
	FreeRDP_ChannelDefArraySize,
	FreeRDP_ClusterInfoFlags,
	FreeRDP_RedirectedSessionId,
	FreeRDP_MonitorCount,
	FreeRDP_MonitorDefArraySize,
	FreeRDP_DesktopPosX,
	FreeRDP_DesktopPosY,
	FreeRDP_NumMonitorIds,
	FreeRDP_MonitorLocalShiftX,
	FreeRDP_MonitorLocalShiftY,
	FreeRDP_MultitransportFlags,
	FreeRDP_CompressionLevel,
	FreeRDP_AutoReconnectMaxRetries,
	FreeRDP_PerformanceFlags,
	FreeRDP_RequestedProtocols,
	FreeRDP_SelectedProtocol,
	FreeRDP_NegotiationFlags,
	FreeRDP_AuthenticationLevel,
	FreeRDP_TlsSecLevel,
	FreeRDP_CookieMaxLength,
	FreeRDP_PreconnectionId,
	FreeRDP_RedirectionFlags,
	FreeRDP_LoadBalanceInfoLength,
	FreeRDP_RedirectionPasswordLength,
	FreeRDP_RedirectionTsvUrlLength,
	FreeRDP_TargetNetAddressCount,
	FreeRDP_RedirectionAcceptedCertLength,
	FreeRDP_RedirectionPreferType,
	FreeRDP_Password51Length,
	FreeRDP_PercentScreen,
	FreeRDP_SmartSizingWidth,
	FreeRDP_SmartSizingHeight,
	FreeRDP_GatewayUsageMethod,
	FreeRDP_GatewayPort,
	FreeRDP_GatewayCredentialsSource,
	FreeRDP_GatewayAcceptedCertLength,
	FreeRDP_ProxyType,
	FreeRDP_RemoteApplicationExpandCmdLine,
	FreeRDP_RemoteApplicationExpandWorkingDir,
	FreeRDP_RemoteAppNumIconCaches,
	FreeRDP_RemoteAppNumIconCacheEntries,
	FreeRDP_RemoteWndSupportLevel,
	FreeRDP_RemoteApplicationSupportLevel,
	FreeRDP_RemoteApplicationSupportMask,
	FreeRDP_ReceivedCapabilitiesSize,
	FreeRDP_OsMajorType,
	FreeRDP_OsMinorType,
	FreeRDP_BitmapCacheVersion,
	FreeRDP_BitmapCacheV2NumCells,
	FreeRDP_PointerCacheSize,
	FreeRDP_KeyboardLayout,
	FreeRDP_KeyboardType,
	FreeRDP_KeyboardSubType,
	FreeRDP_KeyboardFunctionKey,
	FreeRDP_KeyboardHook,
	FreeRDP_BrushSupportLevel,
	FreeRDP_GlyphSupportLevel,
	FreeRDP_OffscreenSupportLevel,
	FreeRDP_OffscreenCacheSize,
	FreeRDP_OffscreenCacheEntries,
	FreeRDP_VirtualChannelCompressionFlags,
	FreeRDP_VirtualChannelChunkSize,
	FreeRDP_MultifragMaxRequestSize,
	FreeRDP_LargePointerFlag,
	FreeRDP_CompDeskSupportLevel,
	FreeRDP_RemoteFxCodecId,
	FreeRDP_RemoteFxCodecMode,
	FreeRDP_RemoteFxCaptureFlags,
	FreeRDP_NSCodecId,
	FreeRDP_FrameAcknowledge,
	FreeRDP_NSCodecColorLossLevel,
	FreeRDP_JpegCodecId,
	FreeRDP_JpegQuality,
	FreeRDP_GfxCapsFilter,
	FreeRDP_BitmapCacheV3CodecId,
	FreeRDP_DrawNineGridCacheSize,
	FreeRDP_DrawNineGridCacheEntries,
	FreeRDP_DeviceCount,
	FreeRDP_DeviceArraySize,
	FreeRDP_StaticChannelCount,
	FreeRDP_StaticChannelArraySize,
	FreeRDP_DynamicChannelCount,
	FreeRDP_DynamicChannelArraySize,
	FreeRDP_TcpKeepAliveRetries,
	FreeRDP_TcpKeepAliveDelay,
	FreeRDP_TcpKeepAliveInterval,
	FreeRDP_TcpAckTimeout,
};

#define have_int32_list_indices
static const size_t int32_list_indices[] = {
	FreeRDP_XPan,
	FreeRDP_YPan,
};

#define have_uint64_list_indices
static const size_t uint64_list_indices[] = {
	FreeRDP_ParentWindowId,
};

#define have_string_list_indices
static const size_t string_list_indices[] = {
	FreeRDP_ServerHostname,
	FreeRDP_Username,
	FreeRDP_Password,
	FreeRDP_Domain,
	FreeRDP_PasswordHash,
	FreeRDP_AcceptedCert,
	FreeRDP_ClientHostname,
	FreeRDP_ClientProductId,
	FreeRDP_AlternateShell,
	FreeRDP_ShellWorkingDirectory,
	FreeRDP_ClientAddress,
	FreeRDP_ClientDir,
	FreeRDP_DynamicDSTTimeZoneKeyName,
	FreeRDP_RemoteAssistanceSessionId,
	FreeRDP_RemoteAssistancePassStub,
	FreeRDP_RemoteAssistancePassword,
	FreeRDP_RemoteAssistanceRCTicket,
	FreeRDP_AuthenticationServiceClass,
	FreeRDP_AllowedTlsCiphers,
	FreeRDP_NtlmSamFile,
	FreeRDP_PreconnectionBlob,
	FreeRDP_TargetNetAddress,
	FreeRDP_RedirectionUsername,
	FreeRDP_RedirectionDomain,
	FreeRDP_RedirectionTargetFQDN,
	FreeRDP_RedirectionTargetNetBiosName,
	FreeRDP_RedirectionAcceptedCert,
	FreeRDP_KerberosKdc,
	FreeRDP_KerberosRealm,
	FreeRDP_CertificateName,
	FreeRDP_CertificateFile,
	FreeRDP_PrivateKeyFile,
	FreeRDP_RdpKeyFile,
	FreeRDP_CertificateContent,
	FreeRDP_PrivateKeyContent,
	FreeRDP_RdpKeyContent,
	FreeRDP_WindowTitle,
	FreeRDP_WmClass,
	FreeRDP_ComputerName,
	FreeRDP_ConnectionFile,
	FreeRDP_AssistanceFile,
	FreeRDP_HomePath,
	FreeRDP_ConfigPath,
	FreeRDP_CurrentPath,
	FreeRDP_DumpRemoteFxFile,
	FreeRDP_PlayRemoteFxFile,
	FreeRDP_GatewayHostname,
	FreeRDP_GatewayUsername,
	FreeRDP_GatewayPassword,
	FreeRDP_GatewayDomain,
	FreeRDP_GatewayAccessToken,
	FreeRDP_GatewayAcceptedCert,
	FreeRDP_ProxyHostname,
	FreeRDP_ProxyUsername,
	FreeRDP_ProxyPassword,
	FreeRDP_RemoteApplicationName,
	FreeRDP_RemoteApplicationIcon,
	FreeRDP_RemoteApplicationProgram,
	FreeRDP_RemoteApplicationFile,
	FreeRDP_RemoteApplicationGuid,
	FreeRDP_RemoteApplicationCmdLine,
	FreeRDP_RemoteApplicationWorkingDir,
	FreeRDP_ImeFileName,
	FreeRDP_DrivesToRedirect,
	FreeRDP_RDP2TCPArgs,
};

#define have_pointer_list_indices
static const size_t pointer_list_indices[] = {
	FreeRDP_instance,
	FreeRDP_ServerRandom,
	FreeRDP_ServerCertificate,
	FreeRDP_ClientRandom,
	FreeRDP_LoadBalanceInfo,
	FreeRDP_RedirectionPassword,
	FreeRDP_RedirectionTsvUrl,
	FreeRDP_Password51,
	FreeRDP_ReceivedCapabilities,
	FreeRDP_OrderSupport,
	FreeRDP_ChannelDefArray,
	FreeRDP_MonitorDefArray,
	FreeRDP_MonitorIds,
	FreeRDP_TargetNetPorts,
	FreeRDP_ClientAutoReconnectCookie,
	FreeRDP_ServerAutoReconnectCookie,
	FreeRDP_ClientTimeZone,
	FreeRDP_TargetNetAddresses,
	FreeRDP_RdpServerRsaKey,
	FreeRDP_RdpServerCertificate,
	FreeRDP_BitmapCacheV2CellInfo,
	FreeRDP_GlyphCache,
	FreeRDP_FragCache,
	FreeRDP_DeviceArray,
	FreeRDP_StaticChannelArray,
	FreeRDP_DynamicChannelArray,
};

#endif /* TEST_SETTINGS_PROPERTY_LISTS */
