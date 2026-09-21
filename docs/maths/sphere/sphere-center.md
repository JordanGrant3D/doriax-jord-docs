###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).center

3D center position of the sphere. Follow the CharacterController character by copying `obj.getPosition()` into it each frame.

```cpp
Vector3 center;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-center.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-center.h"
```
