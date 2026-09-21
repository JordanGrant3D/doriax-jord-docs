[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).pauseGameEvents(bool pause)

Pauses delivery of gameplay events (`onUpdate`, `onFixedUpdate`, input callbacks) without stopping the render loop.

```cpp
static void pauseGameEvents(bool pause);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-pause-game-events.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-pause-game-events.h"
```
