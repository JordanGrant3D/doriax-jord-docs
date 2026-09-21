[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).nearClip

Near clip plane distance. Geometry closer than this is not rendered, so keep it as large as the chase view tolerates to maximise depth-buffer precision.

```cpp
void setNearClip(float nearValue);
float getNearClip() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-near-clip.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-near-clip.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
