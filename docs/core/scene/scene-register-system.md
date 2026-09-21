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

## [Scene](scene.md).registerSystem()

Registers a subsystem of type `T` on this scene and returns it, asserting when the same system is registered twice. The engine registers the default systems (action, mesh, UI, render, physics, audio) at scene creation.

```cpp
template<typename T>
std::shared_ptr<T> registerSystem();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-register-system.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-register-system.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
