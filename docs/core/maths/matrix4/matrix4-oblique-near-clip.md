---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
