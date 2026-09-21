[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
