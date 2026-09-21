---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).canReceiveUIEvents()

Returns `true` if this scene is currently the topmost scene able to receive UI pointer events. The engine calls it internally to route events to the correct scene layer; a HUD script checks it before forwarding clicks.

```cpp
bool canReceiveUIEvents();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-can-receive-ui-events.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-can-receive-ui-events.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
