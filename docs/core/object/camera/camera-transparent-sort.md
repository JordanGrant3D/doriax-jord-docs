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
