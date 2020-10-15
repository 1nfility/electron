// Copyright (c) 2013 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include "shell/common/options_switches.h"

namespace electron {

namespace options {

const char kTitle[] = "title";
const char kIcon[] = "icon";
const char kFrame[] = "frame";
const char kShow[] = "show";
const char kCenter[] = "center";
const char kX[] = "x";
const char kY[] = "y";
const char kWidth[] = "width";
const char kHeight[] = "height";
const char kMinWidth[] = "minWidth";
const char kMinHeight[] = "minHeight";
const char kMaxWidth[] = "maxWidth";
const char kMaxHeight[] = "maxHeight";
const char kResizable[] = "resizable";
const char kMovable[] = "movable";
const char kMinimizable[] = "minimizable";
const char kMaximizable[] = "maximizable";
const char kFullScreenable[] = "fullscreenable";
const char kClosable[] = "closable";
const char kFullscreen[] = "fullscreen";
const char kTrafficLightPosition[] = "trafficLightPosition";

// Whether the window should show in taskbar.
const char kSkipTaskbar[] = "skipTaskbar";

// Start with the kiosk mode, see Opera's page for description:
// http://www.opera.com/support/mastering/kiosk/
const char kKiosk[] = "kiosk";

const char kSimpleFullScreen[] = "simpleFullscreen";

// Make windows stays on the top of all other windows.
const char kAlwaysOnTop[] = "alwaysOnTop";

// Enable the NSView to accept first mouse event.
const char kAcceptFirstMouse[] = "acceptFirstMouse";

// Whether window size should include window frame.
const char kUseContentSize[] = "useContentSize";

// Whether window zoom should be to page width.
const char kZoomToPageWidth[] = "zoomToPageWidth";

// Whether always show title text in full screen is enabled.
const char kFullscreenWindowTitle[] = "fullscreenWindowTitle";

// The requested title bar style for the window
const char kTitleBarStyle[] = "titleBarStyle";

// Tabbing identifier for the window if native tabs are enabled on macOS.
const char kTabbingIdentifier[] = "tabbingIdentifier";

// The menu bar is hidden unless "Alt" is pressed.
const char kAutoHideMenuBar[] = "autoHideMenuBar";

// Enable window to be resized larger than screen.
const char kEnableLargerThanScreen[] = "enableLargerThanScreen";

// Forces to use dark theme on Linux.
const char kDarkTheme[] = "darkTheme";

// Whether the window should be transparent.
const char kTransparent[] = "transparent";

// Window type hint.
const char kType[] = "type";

// Disable auto-hiding cursor.
const char kDisableAutoHideCursor[] = "disableAutoHideCursor";

// Use the macOS' standard window instead of the textured window.
const char kStandardWindow[] = "standardWindow";

// Default browser window background color.
const char kBackgroundColor[] = "backgroundColor";

// Whether the window should have a shadow.
const char kHasShadow[] = "hasShadow";

// Browser window opacity
const char kOpacity[] = "opacity";

// Whether the window can be activated.
const char kFocusable[] = "focusable";

// The WebPreferences.
const char kWebPreferences[] = "webPreferences";

// Add a vibrancy effect to the browser window
const char kVibrancyType[] = "vibrancy";

// Specify how the material appearance should reflect window activity state on
// macOS.
const char kVisualEffectState[] = "visualEffectState";

// The factor of which page should be zoomed.
const char kZoomFactor[] = "zoomFactor";

// Script that will be loaded by guest WebContents before other scripts.
const char kPreloadScript[] = "preload";

// Like --preload, but the passed argument is an URL.
const char kPreloadURL[] = "preloadURL";

// Enable the node integration.
const char kNodeIntegration[] = "nodeIntegration";

// Enable context isolation of Electron APIs and preload script
const char kContextIsolation[] = "contextIsolation";

// Enable world safe passing of values when using "executeJavaScript"
const char kWorldSafeExecuteJavaScript[] = "worldSafeExecuteJavaScript";

// Instance ID of guest WebContents.
const char kGuestInstanceID[] = "guestInstanceId";

// Web runtime features.
const char kExperimentalFeatures[] = "experimentalFeatures";

// Opener window's ID.
const char kOpenerID[] = "openerId";

// Enable the rubber banding effect.
const char kScrollBounce[] = "scrollBounce";

// Enable blink features.
const char kEnableBlinkFeatures[] = "enableBlinkFeatures";

// Disable blink features.
const char kDisableBlinkFeatures[] = "disableBlinkFeatures";

// Enable the node integration in WebWorker.
const char kNodeIntegrationInWorker[] = "nodeIntegrationInWorker";

// Enable the web view tag.
const char kWebviewTag[] = "webviewTag";

const char kNativeWindowOpen[] = "nativeWindowOpen";

const char kCustomArgs[] = "additionalArguments";

const char kPlugins[] = "plugins";

const char kSandbox[] = "sandbox";

const char kWebSecurity[] = "webSecurity";

const char kAllowRunningInsecureContent[] = "allowRunningInsecureContent";

const char kOffscreen[] = "offscreen";

const char kNodeIntegrationInSubFrames[] = "nodeIntegrationInSubFrames";

// Disable window resizing when HTML Fullscreen API is activated.
const char kDisableHtmlFullscreenWindowResize[] =
    "disableHtmlFullscreenWindowResize";

// Enables JavaScript support.
const char kJavaScript[] = "javascript";

// Enables image support.
const char kImages[] = "images";

// Make TextArea elements resizable.
const char kTextAreasAreResizable[] = "textAreasAreResizable";

// Enables WebGL support.
const char kWebGL[] = "webgl";

// Whether dragging and dropping a file or link onto the page causes a
// navigation.
const char kNavigateOnDragDrop[] = "navigateOnDragDrop";

#if BUILDFLAG(ENABLE_BUILTIN_SPELLCHECKER)
const char kSpellcheck[] = "spellcheck";
#endif

#if BUILDFLAG(ENABLE_REMOTE_MODULE)
const char kEnableRemoteModule[] = "enableRemoteModule";
#endif

const char kEnableWebSQL[] = "enableWebSQL";

}  // namespace options

namespace switches {

// Enable chromium sandbox.
const char kEnableSandbox[] = "enable-sandbox";

// Enable plugins.
const char kEnablePlugins[] = "enable-plugins";

// Ppapi Flash path.
const char kPpapiFlashPath[] = "ppapi-flash-path";

// Ppapi Flash version.
const char kPpapiFlashVersion[] = "ppapi-flash-version";

// Disable HTTP cache.
const char kDisableHttpCache[] = "disable-http-cache";

// The list of standard schemes.
const char kStandardSchemes[] = "standard-schemes";

// Register schemes to handle service worker.
const char kServiceWorkerSchemes[] = "service-worker-schemes";

// Register schemes as secure.
const char kSecureSchemes[] = "secure-schemes";

// Register schemes as bypassing CSP.
const char kBypassCSPSchemes[] = "bypasscsp-schemes";

// Register schemes as support fetch API.
const char kFetchSchemes[] = "fetch-schemes";

// Register schemes as CORS enabled.
const char kCORSSchemes[] = "cors-schemes";

// The browser process app model ID
const char kAppUserModelId[] = "app-user-model-id";

// The application path
const char kAppPath[] = "app-path";

const char kEnableApiFilteringLogging[] = "enable-api-filtering-logging";

// The command line switch versions of the options.
const char kBackgroundColor[] = "background-color";
const char kPreloadScript[] = "preload";
const char kPreloadScripts[] = "preload-scripts";
const char kNodeIntegration[] = "node-integration";
const char kContextIsolation[] = "context-isolation";
const char kWorldSafeExecuteJavaScript[] = "world-safe-execute-javascript";
const char kGuestInstanceID[] = "guest-instance-id";
const char kOpenerID[] = "opener-id";
const char kScrollBounce[] = "scroll-bounce";
const char kHiddenPage[] = "hidden-page";
const char kNativeWindowOpen[] = "native-window-open";
const char kWebviewTag[] = "webview-tag";
const char kDisableElectronSiteInstanceOverrides[] =
    "disable-electron-site-instance-overrides";
const char kEnableNodeLeakageInRenderers[] = "enable-node-leakage-in-renderers";

// Command switch passed to renderer process to control nodeIntegration.
const char kNodeIntegrationInWorker[] = "node-integration-in-worker";

// Command switch passed to renderer process to control whether node
// environments will be created in sub-frames.
const char kNodeIntegrationInSubFrames[] = "node-integration-in-subframes";

// Command switch passed to render process to control whether WebSQL api
// is allowed.
const char kEnableWebSQL[] = "enable-websql";

// Widevine options
// Path to Widevine CDM binaries.
const char kWidevineCdmPath[] = "widevine-cdm-path";
// Widevine CDM version.
const char kWidevineCdmVersion[] = "widevine-cdm-version";

// Forces the maximum disk space to be used by the disk cache, in bytes.
const char kDiskCacheSize[] = "disk-cache-size";

// Ignore the limit of 6 connections per host.
const char kIgnoreConnectionsLimit[] = "ignore-connections-limit";

// Whitelist containing servers for which Integrated Authentication is enabled.
const char kAuthServerWhitelist[] = "auth-server-whitelist";

// Whitelist containing servers for which Kerberos delegation is allowed.
const char kAuthNegotiateDelegateWhitelist[] =
    "auth-negotiate-delegate-whitelist";

// If set, include the port in generated Kerberos SPNs.
const char kEnableAuthNegotiatePort[] = "enable-auth-negotiate-port";

// If set, NTLM v2 is disabled for POSIX platforms.
const char kDisableNTLMv2[] = "disable-ntlm-v2";

#if BUILDFLAG(ENABLE_BUILTIN_SPELLCHECKER)
const char kEnableSpellcheck[] = "enable-spellcheck";
#endif

#if BUILDFLAG(ENABLE_REMOTE_MODULE)
const char kEnableRemoteModule[] = "enable-remote-module";
#endif

const char kGlobalCrashKeys[] = "global-crash-keys";

}  // namespace switches

}  // namespace electron