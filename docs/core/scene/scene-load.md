[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).load()

Initializes the scene subsystems, creating the default camera when none is set. Called automatically by the engine when the scene is added; only call it manually when managing scenes outside the engine lifecycle.

```cpp
void load();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
