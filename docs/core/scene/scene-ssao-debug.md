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

## [Scene](scene.md).setSSAODebug()

Enables the SSAO debug view, which outputs the raw screen-space AO buffer as grayscale instead of shaded color, and `isSSAODebug()` reports whether it is on. It is a tuning aid and is not serialized.

```cpp
void setSSAODebug(bool debug);
bool isSSAODebug() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssao-debug.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssao-debug.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
