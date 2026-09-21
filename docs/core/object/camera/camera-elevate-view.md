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

## [Camera](camera.md).elevateView()

Pitches the look direction up or down by `angle` degrees while the position stays fixed. Vertical-look chase controls use it to glance up or down the path.

```cpp
void elevateView(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-elevate-view.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-elevate-view.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
