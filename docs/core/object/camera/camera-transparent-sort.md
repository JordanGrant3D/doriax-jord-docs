---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).transparentSort

Enables back-to-front depth sorting of transparent objects from this camera's viewpoint. Keep it on for 3D chase views; turn it off for orthographic UI cameras ordered by hierarchy.

```cpp
void setTransparentSort(bool transparentSort);
bool isTransparentSort() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-transparent-sort.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-transparent-sort.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
