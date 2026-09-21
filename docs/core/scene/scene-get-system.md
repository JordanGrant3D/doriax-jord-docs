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

## [Scene](scene.md).getSystem()

Returns the registered subsystem of type `T`, asserting when no such system exists. A CharacterController script resolves the physics system to read world gravity for jump tuning.

```cpp
template<typename T>
std::shared_ptr<T> getSystem();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-get-system.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-get-system.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
