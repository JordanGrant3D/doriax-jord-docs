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

## [Camera](camera.md).farClip

Far clip plane distance. Geometry further than this is not rendered; pull it in on large open maps to help depth precision on the chase view.

```cpp
void setFarClip(float farValue);
float getFarClip() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-far-clip.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-far-clip.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
