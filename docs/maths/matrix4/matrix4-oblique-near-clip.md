[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).obliqueNearClip(const Vector4& clipPlane)

Replaces the projection's depth row so the near plane lands exactly on a world clip plane (mirror/portals). Returns the source unchanged when the plane is nearly edge-on to the view.

```cpp
Matrix4 obliqueNearClip(const Vector4& clipPlane) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-oblique-near-clip.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-oblique-near-clip.h"
```
