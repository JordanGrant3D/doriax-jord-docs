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

## [Camera](camera.md).rotateView()

Yaws the look direction around the up axis by `angle` degrees while the position stays fixed. Drag-to-look chase controls use it to glance around without moving the boom.

```cpp
void rotateView(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-rotate-view.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-rotate-view.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
