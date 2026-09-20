###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).perpendicular()

Returns a normalized vector perpendicular (orthogonal) to this vector. Picks a stable cross axis internally. Useful for strafe / dodge directions.

```cpp
Vector3 perpendicular() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-perpendicular.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-perpendicular.h"
```
