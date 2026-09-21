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

## [Scene](scene.md).setEnableUIEvents()

Overrides per-scene UI event routing (`NOT_SET` inherits the engine default, `ENABLED` receives pointer events, `DISABLED` ignores them). `getEnableUIEvents()` returns the override, `enableUIEvents()` is shorthand for enabling, and `isEnableUIEvents()` reports whether events are enabled.

```cpp
void setEnableUIEvents(UIEventState enableUIEvents);
void setEnableUIEvents(bool enableUIEvents);
UIEventState getEnableUIEvents() const;
void enableUIEvents();
bool isEnableUIEvents() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-enable-ui-events.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-enable-ui-events.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
