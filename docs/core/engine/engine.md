---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Engine

Control engine properties and define defaults used across the whole project. `Engine` is entirely static — never instantiated. It manages the scene stack, canvas size and scaling, the update loop, platform queries, and all frame/input callback events.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Scaling**](../../maths/scaling/scaling.md) | [**scalingMode**](engine-scaling-mode.md) | How the logical canvas maps to the physical window. |
| [**TextureStrategy**](../../maths/texture-strategy/texture-strategy.md) | [**textureStrategy**](engine-texture-strategy.md) | Automatic resizing of non-power-of-two textures. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**callMouseInTouchEvent**](engine-call-mouse-in-touch-event.md) | Whether touch input also fires mouse events. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**callTouchInMouseEvent**](engine-call-touch-in-mouse-event.md) | Whether mouse input also fires touch events. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**useDegrees**](engine-use-degrees.md) | Whether angle parameters use degrees (`true`) or radians. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**allowEventsOutCanvas**](engine-allow-events-out-canvas.md) | Whether mouse move/scroll events fire outside the canvas. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**ignoreEventsHandledByUI**](engine-ignore-events-handled-by-ui.md) | Whether gameplay input skips events consumed by UI. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**updateTime**](engine-update-time.md) | Fixed-update interval in seconds driving `onFixedUpdate` and physics. |
| [**double**](https://en.cppreference.com/cpp/keyword/double) | [**interpolationAlpha**](engine-interpolation-alpha.md) | Blend factor between fixed-update steps for the current frame. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**canvasWidth**](engine-canvas-size.md) / [**canvasHeight**](engine-canvas-size.md) | Logical canvas size after scaling. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**preferredCanvasWidth**](engine-preferred-canvas-size.md) / [**preferredCanvasHeight**](engine-preferred-canvas-size.md) | Canvas size passed to `setCanvasSize`. |
| [**Rect**](../maths/rect/rect.md) | [**viewRect**](engine-view-rect.md) | Viewport rectangle from canvas size, screen size, and scaling mode. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**deltatime**](engine-deltatime.md) | Seconds since the last draw frame, clamped by `maxDeltatime`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**maxDeltatime**](engine-max-deltatime.md) | Upper bound for `deltatime` (default `0.25`). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**framerate**](engine-framerate.md) | Current frames-per-second estimate. |
| [**double**](https://en.cppreference.com/cpp/keyword/double) | [**systemTime**](engine-system-time.md) | Monotonic wall-clock time in seconds. |
| [**Platform**](../../maths/platform/platform.md) | [**platform**](engine-platform.md) | Platform the engine is running on. |
| [**GraphicBackend**](../../maths/graphic-backend/graphic-backend.md) | [**graphicBackend**](engine-graphic-backend.md) | Active graphics backend. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**openGL**](engine-open-gl.md) | Whether an OpenGL backend is active. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**asyncLoading**](engine-async-loading.md) | Whether background resource loading is enabled. |
| [**CursorType**](../../engine/cursor-type/cursor-type.md) | [**mouseCursor**](engine-mouse-cursor.md) | OS mouse cursor shape. |
| [**MouseMode**](../../engine/mouse-mode/mouse-mode.md) | [**mouseMode**](engine-mouse-mode.md) | Mouse visibility and capture behaviour. |
| **[**Framebuffer\***](../assets/texture/framebuffer.md)** | [**framebuffer**](engine-framebuffer.md) | Off-screen render target for full-frame output. |

## Constructors

`Engine` is entirely static and cannot be instantiated, so it exposes no public constructors. Configure it through its static properties and methods, typically from the `init()` function registered with `DORIAX_INIT`.

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setScene**](engine-set-scene.md) | [**Scene**](../scene/scene.md)\* scene | Sets the main scene. |
| [**Scene**](../scene/scene.md)\* | [**getScene**](engine-get-scene.md) |  | Returns the current main scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addSceneLayer**](engine-add-scene-layer.md) | [**Scene**](../scene/scene.md)\* scene | Renders an additional scene as a layer on top of the main scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**executeSceneOnce**](engine-execute-scene-once.md) | [**Scene**](../scene/scene.md)\* scene | Runs a scene for a single draw, then removes it automatically. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeScene**](engine-remove-scene.md) | [**Scene**](../scene/scene.md)\* scene | Removes a specific scene from the active scene stack. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeAllSceneLayers**](engine-remove-all-scene-layers.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) removeOneTimeScenes | Removes all layered scenes. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeAllScenes**](engine-remove-all-scenes.md) |  | Removes all scenes, including the main scene and all layers. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isSceneRunning**](engine-is-scene-running.md) | [**Scene**](../scene/scene.md)\* scene | Whether the given scene is in the active scene stack. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasScenesToExecuteOnce**](engine-has-scenes-to-execute-once.md) |  | Whether any one-shot scene is still waiting to be drawn. |
| [**Scene**](../scene/scene.md)\* | [**getMainScene**](engine-get-main-scene.md) |  | Returns the scene set with `setScene`. |
| [**Scene**](../scene/scene.md)\* | [**getLastScene**](engine-get-last-scene.md) |  | Returns the top-most scene in the stack. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**pauseGameEvents**](engine-pause-game-events.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) pause | Pauses gameplay event delivery without stopping rendering. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCanvasSize**](engine-set-canvas-size.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) canvasWidth, [**int**](https://en.cppreference.com/cpp/keyword/int) canvasHeight | Sets the preferred logical canvas dimensions. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMousePosition**](engine-set-mouse-position.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the mouse position in logical canvas coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setUpdateTimeMS**](engine-set-update-time-ms.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) updateTimeMS | Sets the fixed-update interval in milliseconds. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isUIEventReceived**](engine-is-ui-event-received.md) |  | Whether any UI widget consumed a pointer event this frame. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isViewLoaded**](engine-is-view-loaded.md) |  | Whether the graphics surface is ready. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaxResourceLoadingThreads**](engine-set-max-resource-loading-threads.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) maxThreads | Sets the worker thread count for background asset loading. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getQueuedResourceCount**](engine-get-queued-resource-count.md) |  | Resources still waiting on background loading threads. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearPools**](engine-clear-pools.md) |  | Fully clears all resource caches. C++ only. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearUnusedPools**](engine-clear-unused-pools.md) |  | Clears only unreferenced resource cache entries. C++ only. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearAllSubscriptions**](engine-clear-all-subscriptions.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) includeLifecycle | Removes all registered engine event callbacks. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearComponentSubscriptions**](engine-clear-component-subscriptions.md) | [**Scene**](../scene/scene.md)\* scene | Removes callbacks registered on a scene's components. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeSubscriptionsByTag**](engine-remove-subscriptions-by-tag.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& substring | Removes subscriptions whose tag contains the substring. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**startAsyncThread**](engine-async-thread.md) |  | Marks the current worker thread for GPU resource creation. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**commitThreadQueue**](engine-async-thread.md) |  | Flushes pending GPU uploads on the main thread. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**endAsyncThread**](engine-async-thread.md) |  | Unmarks the current worker thread. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isAsyncThread**](engine-async-thread.md) |  | Whether the calling thread is a marked worker thread. |
| **[**FunctionSubscribe**](../../util/function-subscribe/function-subscribe.md)\<[**void**](https://en.cppreference.com/cpp/keyword/void)()\>&** | [**getOnInit**](engine-get-on-init.md) |  | Safe accessor for the Init event. |

## Callback events

Subscribe with `Engine::eventName.add("tag", &callback)` from C++, or with the `REGISTER_ENGINE_EVENT(method)` macro inside a `testerScript`. Startup code belongs in the `init()` function registered with `DORIAX_INIT` (see `getOnInit`).

| Callback | Event | Description |
| :--- | :--- | :--- |
| `void()` | `onViewLoaded` | Fired once when the graphics surface is ready for rendering. |
| `void()` | `onViewChanged` | Fired when the canvas or window size changes. |
| `void()` | `onViewDestroyed` | Fired when the graphics surface is being destroyed. |
| `void()` | `onDraw` | Fired every frame after the scene is drawn. |
| `void()` | `onUpdate` | Fired every frame for variable-step gameplay logic. |
| `void()` | `onFixedUpdate` | Fired at the fixed `updateTime` interval for physics and deterministic simulation. |
| `void()` | `onPostUpdate` | Fired after the update and fixed-update passes each frame. |
| `void()` | `onPause` | Fired when the system suspends the application. |
| `void()` | `onResume` | Fired when the application returns to the foreground. |
| `void()` | `onShutdown` | Fired when the application is closing. |
| `void(int,float,float)` | `onTouchStart` | A new touch contact begins. |
| `void(int,float,float)` | `onTouchEnd` | A touch contact is lifted. |
| `void(int,float,float)` | `onTouchMove` | A touch contact moves. |
| `void()` | `onTouchCancel` | The system cancels the current touch sequence. |
| `void(int,float,float,int)` | `onMouseDown` | A mouse button is pressed. |
| `void(int,float,float,int)` | `onMouseUp` | A mouse button is released. |
| `void(float,float,int)` | `onMouseMove` | The mouse cursor moves. |
| `void(float,float,int)` | `onMouseScroll` | The mouse scroll wheel changes. |
| `void()` | `onMouseEnter` | The mouse cursor enters the canvas boundary. |
| `void()` | `onMouseLeave` | The mouse cursor leaves the canvas boundary. |
| `void(int,bool,int)` | `onKeyDown` | A keyboard key is pressed. |
| `void(int,bool,int)` | `onKeyUp` | A keyboard key is released. |
| `void(wchar_t)` | `onCharInput` | Text input, including composed characters. |
| `void(int)` | `onGamepadConnect` | A controller is connected. |
| `void(int)` | `onGamepadDisconnect` | A controller is disconnected. |
| `void(int,int)` | `onGamepadButtonDown` | A controller button is pressed. |
| `void(int,int)` | `onGamepadButtonUp` | A controller button is released. |
| `void(int,int,float)` | `onGamepadAxisMove` | A controller analog axis changes. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
