/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * FreeRDP Client Command-Line Interface
 *
 * Copyright 2018 Bernhard Miklautz <bernhard.miklautz@thincast.com>
 * Copyright 2018 Thincast Technologies GmbH
 *
 * Myrtille: A native HTML4/5 Remote Desktop Protocol client
 *
 * Copyright(c) 2014-2018 Cedric Coste
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef CLIENT_COMMON_CMDLINE_H
#define CLIENT_COMMON_CMDLINE_H

#include <winpr/cmdline.h>

static COMMAND_LINE_ARGUMENT_A args[] =
{
	{ "a", COMMAND_LINE_VALUE_REQUIRED, "<addin>[,<options>]", NULL, NULL, -1, "addin", "Addin" },
	{ "action-script", COMMAND_LINE_VALUE_REQUIRED, "<file-name>", "~/.config/freerdp/action.sh", NULL, -1, NULL, "Action script" },
	{ "admin", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, "console", "Admin (or console) session" },
	{ "aero", COMMAND_LINE_VALUE_BOOL, NULL, NULL, BoolValueFalse, -1, NULL, "Enable desktop composition" },
	{ "app", COMMAND_LINE_VALUE_REQUIRED, "<path> or ||<alias>", NULL, NULL, -1, NULL, "Remote application program" },
	{ "app-cmd", COMMAND_LINE_VALUE_REQUIRED, "<parameters>", NULL, NULL, -1, NULL, "Remote application command-line parameters" },
	{ "app-file", COMMAND_LINE_VALUE_REQUIRED, "<file-name>", NULL, NULL, -1, NULL, "File to open with remote application" },
	{ "app-guid", COMMAND_LINE_VALUE_REQUIRED, "<app-guid>", NULL, NULL, -1, NULL, "Remote application GUID" },
	{ "app-icon", COMMAND_LINE_VALUE_REQUIRED, "<icon-path>", NULL, NULL, -1, NULL, "Remote application icon for user interface" },
	{ "app-name", COMMAND_LINE_VALUE_REQUIRED, "<app-name>", NULL, NULL, -1, NULL, "Remote application name for user interface" },
	{ "assistance", COMMAND_LINE_VALUE_REQUIRED, "<password>", NULL, NULL, -1, NULL, "Remote assistance password" },
	{ "async-channels", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Asynchronous channels (experimental)" },
	{ "async-input", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Asynchronous input" },
	{ "async-transport", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Asynchronous transport (experimental)" },
	{ "async-update", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Asynchronous update" },
	{ "audio-mode", COMMAND_LINE_VALUE_REQUIRED, "<mode>", NULL, NULL, -1, NULL, "Audio output mode" },
	{ "auth-only", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Authenticate only" },
	{ "authentication", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Authentication (expermiental)" },
	{ "auto-reconnect", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Automatic reconnection" },
	{ "auto-reconnect-max-retries", COMMAND_LINE_VALUE_REQUIRED, "<retries>", NULL, NULL, -1, NULL, "Automatic reconnection maximum retries, 0 for unlimited [0,1000]" },
	{ "bitmap-cache", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Enable bitmap cache" },
	{ "bpp", COMMAND_LINE_VALUE_REQUIRED, "<depth>", "16", NULL, -1, NULL, "Session bpp (color depth)" },
	{ "buildconfig", COMMAND_LINE_VALUE_FLAG | COMMAND_LINE_PRINT_BUILDCONFIG, NULL, NULL, NULL, -1, NULL, "Print the build configuration" },
	{ "cert-ignore", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Ignore certificate" },
	{ "cert-name", COMMAND_LINE_VALUE_REQUIRED, "<name>", NULL, NULL, -1, NULL, "Certificate name" },
	{ "cert-tofu", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Automatically accept certificate on first connect" },
	{ "client-hostname", COMMAND_LINE_VALUE_REQUIRED, "<name>", NULL, NULL, -1, NULL, "Client Hostname to send to server" },
	{ "clipboard", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Redirect clipboard" },
	{ "codec-cache", COMMAND_LINE_VALUE_REQUIRED, "rfx|nsc|jpeg", NULL, NULL, -1, NULL, "Bitmap codec cache" },
	{ "compression", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, "z", "Enable compression" },
	{ "compression-level", COMMAND_LINE_VALUE_REQUIRED, "<level>", NULL, NULL, -1, NULL, "Compression level (0,1,2)" },
	{ "credentials-delegation", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Disable credentials delegation" },
	{ "d", COMMAND_LINE_VALUE_REQUIRED, "<domain>", NULL, NULL, -1, NULL, "Domain" },
	{ "decorations", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Window decorations" },
	{ "disp", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Display control" },
	{ "drive", COMMAND_LINE_VALUE_REQUIRED, "<name>,<path>", NULL, NULL, -1, NULL, "Redirect directory <path> as named share <name>" },
	{ "drives", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Redirect all mount points as shares" },
	{ "dvc", COMMAND_LINE_VALUE_REQUIRED, "<channel>[,<options>]", NULL, NULL, -1, NULL, "Dynamic virtual channel" },
	{ "dynamic-resolution", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Send resolution updates when the window is resized" },
	{ "echo", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, "echo", "Echo channel" },
	{ "encryption", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Encryption (experimental)" },
	{ "encryption-methods", COMMAND_LINE_VALUE_REQUIRED, "[40,][56,][128,][FIPS]", NULL, NULL, -1, NULL, "RDP standard security encryption methods" },
	{ "f", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Fullscreen mode (<Ctrl>+<Alt>+<Enter> toggles fullscreen)" },
	{ "fast-path", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Enable fast-path input/output" },
	{ "fipsmode", COMMAND_LINE_VALUE_BOOL, NULL, NULL, NULL, -1, NULL, "Enable FIPS mode" },
	{ "fonts", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Enable smooth fonts (ClearType)" },
	{ "frame-ack", COMMAND_LINE_VALUE_REQUIRED, "<number>", NULL, NULL, -1, NULL, "Number of frame acknowledgement" },
	{ "from-stdin", COMMAND_LINE_VALUE_OPTIONAL, "force", NULL, NULL, -1, NULL, "Read credentials from stdin. With <force> the prompt is done before connection, otherwise on server request." },
	{ "g", COMMAND_LINE_VALUE_REQUIRED, "<gateway>[:<port>]", NULL, NULL, -1, NULL, "Gateway Hostname" },
	{ "gateway-usage-method", COMMAND_LINE_VALUE_REQUIRED, "direct|detect", NULL, NULL, -1, "gum", "Gateway usage method" },
	{ "gd", COMMAND_LINE_VALUE_REQUIRED, "<domain>", NULL, NULL, -1, NULL, "Gateway domain" },
	{ "gdi", COMMAND_LINE_VALUE_REQUIRED, "sw|hw", NULL, NULL, -1, NULL, "GDI rendering" },
	{ "geometry", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Geometry tracking channel" },
	{ "gestures", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Consume multitouch input locally" },
#ifdef WITH_GFX_H264
	{ "gfx", COMMAND_LINE_VALUE_OPTIONAL, "RFX|AVC420|AVC444", NULL, NULL, -1, NULL, "RDP8 graphics pipeline (experimental)" },
	{ "gfx-h264", COMMAND_LINE_VALUE_OPTIONAL, "AVC420|AVC444", NULL, NULL, -1, NULL, "RDP8.1 graphics pipeline using H264 codec" },
#else
	{ "gfx", COMMAND_LINE_VALUE_OPTIONAL, "RFX", NULL, NULL, -1, NULL, "RDP8 graphics pipeline (experimental)" },
#endif
	{ "gfx-progressive", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "RDP8 graphics pipeline using progressive codec" },
	{ "gfx-small-cache", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "RDP8 graphics pipeline using small cache mode" },
	{ "gfx-thin-client", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "RDP8 graphics pipeline using thin client mode" },
	{ "glyph-cache", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Glyph cache (experimental)" },
	{ "gp", COMMAND_LINE_VALUE_REQUIRED, "<password>", NULL, NULL, -1, NULL, "Gateway password" },
	{ "grab-keyboard", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Grab keyboard" },
	{ "gt", COMMAND_LINE_VALUE_REQUIRED, "rpc|http|auto", NULL, NULL, -1, NULL, "Gateway transport type" },
	{ "gu", COMMAND_LINE_VALUE_REQUIRED, "[<domain>\\]<user> or <user>[@<domain>]", NULL, NULL, -1, NULL, "Gateway username" },
	{ "gat", COMMAND_LINE_VALUE_REQUIRED, "<access token>", NULL, NULL, -1, NULL, "Gateway Access Token" },
	{ "h", COMMAND_LINE_VALUE_REQUIRED, "<height>", "768", NULL, -1, NULL, "Height" },
	{ "heartbeat", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Support heartbeat PDUs" },
	{ "help", COMMAND_LINE_VALUE_FLAG | COMMAND_LINE_PRINT_HELP, NULL, NULL, NULL, -1, "?", "Print help" },
	{ "home-drive", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Redirect user home as share" },
	{ "ipv6", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, "6", "Prefer IPv6 AAA record over IPv4 A record"},
#if defined(WITH_JPEG)
	{ "jpeg", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Enable JPEG codec" },
	{ "jpeg-quality", COMMAND_LINE_VALUE_REQUIRED, "<percentage>", NULL, NULL, -1, NULL, "JPEG quality" },
#endif
	{ "kbd", COMMAND_LINE_VALUE_REQUIRED, "0x<id> or <name>", NULL, NULL, -1, NULL, "Keyboard layout" },
	{ "kbd-fn-key", COMMAND_LINE_VALUE_REQUIRED, "<value>", NULL, NULL, -1, NULL, "Function key value" },
	{ "kbd-list", COMMAND_LINE_VALUE_FLAG | COMMAND_LINE_PRINT, NULL, NULL, NULL, -1, NULL, "List keyboard layouts" },
	{ "kbd-subtype", COMMAND_LINE_VALUE_REQUIRED, "<id>", NULL, NULL, -1, NULL, "Keyboard subtype" },
	{ "kbd-type", COMMAND_LINE_VALUE_REQUIRED, "<id>", NULL, NULL, -1, NULL, "Keyboard type" },
	{ "load-balance-info", COMMAND_LINE_VALUE_REQUIRED, "<info-string>", NULL, NULL, -1, NULL, "Load balance info" },
	{ "log-filters", COMMAND_LINE_VALUE_REQUIRED, "<tag>:<level>[,<tag>:<level>[,...]]", NULL, NULL, -1, NULL, "Set logger filters, see wLog(7) for details" },
	{ "log-level", COMMAND_LINE_VALUE_REQUIRED, "OFF|FATAL|ERROR|WARN|INFO|DEBUG|TRACE", NULL, NULL, -1, NULL, "Set the default log level, see wLog(7) for details" },
	{ "max-fast-path-size", COMMAND_LINE_VALUE_REQUIRED, "<size>", NULL, NULL, -1, NULL, "Specify maximum fast-path update size" },
	{ "max-loop-time", COMMAND_LINE_VALUE_REQUIRED, "<time>", NULL, NULL, -1, NULL, "Specify maximum time in milliseconds spend treating packets"},
	{ "menu-anims", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Enable menu animations" },
	{ "microphone", COMMAND_LINE_VALUE_OPTIONAL, "[sys:<sys>,][dev:<dev>,][format:<format>,][rate:<rate>,][channel:<channel>]", NULL, NULL, -1, "mic", "Audio input (microphone)" },
	{ "monitor-list", COMMAND_LINE_VALUE_FLAG | COMMAND_LINE_PRINT, NULL, NULL, NULL, -1, NULL, "List detected monitors" },
	{ "monitors", COMMAND_LINE_VALUE_REQUIRED, "<id>[,<id>[,...]]", NULL, NULL, -1, NULL, "Select monitors to use" },
	{ "mouse-motion", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Send mouse motion" },
	{ "multimedia", COMMAND_LINE_VALUE_OPTIONAL, "[sys:<sys>,][dev:<dev>,][decoder:<decoder>]", NULL, NULL, -1, "mmr", "Redirect multimedia (video)" },
	{ "multimon", COMMAND_LINE_VALUE_OPTIONAL, "force", NULL, NULL, -1, NULL, "Use multiple monitors" },
	{ "multitouch", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Redirect multitouch input" },
	{ "multitransport", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Support multitransport protocol" },
	{ "nego", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Enable protocol security negotiation" },
	{ "network", COMMAND_LINE_VALUE_REQUIRED, "modem|broadband|broadband-low|broadband-higg|wan|lan|auto", NULL, NULL, -1, NULL, "Network connection type" },
	{ "nsc", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, "nscodec", "Enable NSCodec" },
	{ "offscreen-cache", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Enable offscreen bitmap cache" },
	{ "orientation", COMMAND_LINE_VALUE_REQUIRED, "0|90|180|270", NULL, NULL, -1, NULL, "Orientation of display in degrees" },
	{ "p", COMMAND_LINE_VALUE_REQUIRED, "<password>", NULL, NULL, -1, NULL, "Password" },
	{ "parallel", COMMAND_LINE_VALUE_OPTIONAL, "<name>[,<path>]", NULL, NULL, -1, NULL, "Redirect parallel device" },
	{ "parent-window", COMMAND_LINE_VALUE_REQUIRED, "<window-id>", NULL, NULL, -1, NULL, "Parent window id" },
	{ "password-is-pin", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Use smart card authentication with password as smart card PIN"},
	{ "pcb", COMMAND_LINE_VALUE_REQUIRED, "<blob>", NULL, NULL, -1, NULL, "Preconnection Blob" },
	{ "pcid", COMMAND_LINE_VALUE_REQUIRED, "<id>", NULL, NULL, -1, NULL, "Preconnection Id" },
	{ "pheight", COMMAND_LINE_VALUE_REQUIRED, "<height>", NULL, NULL, -1, NULL, "Physical height of display (in millimeters)" },
	{ "play-rfx", COMMAND_LINE_VALUE_REQUIRED, "<pcap-file>", NULL, NULL, -1, NULL, "Replay rfx pcap file" },
	{ "port", COMMAND_LINE_VALUE_REQUIRED, "<number>", NULL, NULL, -1, NULL, "Server port" },
	{ "print-reconnect-cookie", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Print base64 reconnect cookie after connecting" },
	{ "printer", COMMAND_LINE_VALUE_OPTIONAL, "<name>[,<driver>]", NULL, NULL, -1, NULL, "Redirect printer device" },
	{ "proxy", COMMAND_LINE_VALUE_REQUIRED, "[<proto>://]<host>:<port>", NULL, NULL, -1, NULL, "Proxy (see also environment variable below)" },
	{ "pth", COMMAND_LINE_VALUE_REQUIRED, "<password-hash>", NULL, NULL, -1, "pass-the-hash", "Pass the hash (restricted admin mode)" },
	{ "pwidth", COMMAND_LINE_VALUE_REQUIRED, "<width>", NULL, NULL, -1, NULL, "Physical width of display (in millimeters)" },
	{ "reconnect-cookie", COMMAND_LINE_VALUE_REQUIRED, "<base64-cookie>", NULL, NULL, -1, NULL, "Pass base64 reconnect cookie to the connection" },
	{ "restricted-admin", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, "restrictedAdmin", "Restricted admin mode" },
	{ "rfx", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "RemoteFX" },
	{ "rfx-mode", COMMAND_LINE_VALUE_REQUIRED, "image|video", NULL, NULL, -1, NULL, "RemoteFX mode" },
	{ "scale", COMMAND_LINE_VALUE_REQUIRED, "100|140|180", "100", NULL, -1, NULL, "Scaling factor of the display" },
	{ "scale-desktop", COMMAND_LINE_VALUE_REQUIRED, "<percentage>", "100", NULL, -1, NULL, "Scaling factor for desktop applications (value between 100 and 500)" },
	{ "scale-device", COMMAND_LINE_VALUE_REQUIRED, "100|140|180", "100", NULL, -1, NULL, "Scaling factor for app store applications" },
	{ "sec", COMMAND_LINE_VALUE_REQUIRED, "rdp|tls|nla|ext", NULL, NULL, -1, NULL, "Force specific protocol security" },
	{ "sec-ext", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "NLA extended protocol security" },
	{ "sec-nla", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "NLA protocol security" },
	{ "sec-rdp", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "RDP protocol security" },
	{ "sec-tls", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "TLS protocol security" },
	{ "serial", COMMAND_LINE_VALUE_OPTIONAL, "<name>[,<path>[,<driver>[,permissive]]]", NULL, NULL, -1, "tty", "Redirect serial device" },
	{ "shell", COMMAND_LINE_VALUE_REQUIRED, "<shell>", NULL, NULL, -1, NULL, "Alternate shell" },
	{ "shell-dir", COMMAND_LINE_VALUE_REQUIRED, "<dir>", NULL, NULL, -1, NULL, "Shell working directory" },
	{ "size", COMMAND_LINE_VALUE_REQUIRED, "<width>x<height> or <percent>%[wh]", "1024x768", NULL, -1, NULL, "Screen size" },
	{ "smart-sizing", COMMAND_LINE_VALUE_OPTIONAL, "<width>x<height>", NULL, NULL, -1, NULL, "Scale remote desktop to window size" },
	{ "smartcard", COMMAND_LINE_VALUE_OPTIONAL, "<name>[,<path>]", NULL, NULL, -1, NULL, "Redirect smartcard device" },
	{ "sound", COMMAND_LINE_VALUE_OPTIONAL, "[sys:<sys>,][dev:<dev>,][format:<format>,][rate:<rate>,][channel:<channel>,][latency:<latency>,][quality:<quality>]", NULL, NULL, -1, "audio", "Audio output (sound)" },
	{ "span", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Span screen over multiple monitors" },
	{ "spn-class", COMMAND_LINE_VALUE_REQUIRED, "<service-class>", NULL, NULL, -1, NULL, "SPN authentication service class" },
	{ "ssh-agent", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, "ssh-agent", "SSH Agent forwarding channel" },
	{ "t", COMMAND_LINE_VALUE_REQUIRED, "<title>", NULL, NULL, -1, "title", "Window title" },
	{ "themes", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Enable themes" },
	{ "tls-ciphers", COMMAND_LINE_VALUE_REQUIRED, "netmon|ma|ciphers", NULL, NULL, -1, NULL, "Allowed TLS ciphers" },
	{ "toggle-fullscreen", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Alt+Ctrl+Enter toggles fullscreen" },
	{ "u", COMMAND_LINE_VALUE_REQUIRED, "[<domain>\\]<user> or <user>[@<domain>]", NULL, NULL, -1, NULL, "Username" },
	{ "unmap-buttons", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Let server see real physical pointer button"},
	{ "usb", COMMAND_LINE_VALUE_REQUIRED, "[dbg,][dev:<dev>,][id|addr,][auto]", NULL, NULL, -1, NULL, "Redirect USB device" },
	{ "v", COMMAND_LINE_VALUE_REQUIRED, "<server>[:port]", NULL, NULL, -1, NULL, "Server hostname" },
	{ "vc", COMMAND_LINE_VALUE_REQUIRED, "<channel>[,<options>]", NULL, NULL, -1, NULL, "Static virtual channel" },
	{ "version", COMMAND_LINE_VALUE_FLAG | COMMAND_LINE_PRINT_VERSION, NULL, NULL, NULL, -1, NULL, "Print version" },
	{ "video", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Video optimized remoting channel" },
	{ "vmconnect", COMMAND_LINE_VALUE_OPTIONAL, "<vmid>", NULL, NULL, -1, NULL, "Hyper-V console (use port 2179, disable negotiation)" },
	{ "w", COMMAND_LINE_VALUE_REQUIRED, "<width>", "1024", NULL, -1, NULL, "Width" },
	{ "wallpaper", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueTrue, NULL, -1, NULL, "Enable wallpaper" },
	{ "window-drag", COMMAND_LINE_VALUE_BOOL, NULL, BoolValueFalse, NULL, -1, NULL, "Enable full window drag" },
	{ "wm-class", COMMAND_LINE_VALUE_REQUIRED, "<class-name>", NULL, NULL, -1, NULL, "Set the WM_CLASS hint for the window instance" },
	{ "workarea", COMMAND_LINE_VALUE_FLAG, NULL, NULL, NULL, -1, NULL, "Use available work area" },
	
	#pragma region Myrtille

	{ "myrtille-sid", COMMAND_LINE_VALUE_OPTIONAL, "<myrtille>", 0, NULL, -1, NULL, "Remote session id. 0 to disable (runs freerdp standalone, without the myrtille code)" },
	{ "myrtille-window", COMMAND_LINE_VALUE_BOOL, "<myrtille>", false, NULL, -1, NULL, "Display the freerdp window. to disable if myrtille is running as a service (non user interactive mode)" },
	{ "myrtille-log", COMMAND_LINE_VALUE_BOOL, "<myrtille>", false, NULL, -1, NULL, "Write console output to a log file (stamped with the freerdp process ID)" },

	#pragma endregion
	
	{ NULL, 0, NULL, NULL, NULL, -1, NULL, NULL }
};
#endif /* CLIENT_COMMON_CMDLINE_H */
