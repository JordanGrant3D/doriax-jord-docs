---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).reflect(const Vector3& normal)

Reflects this vector across a surface normal: `*this - 2 * dot(normal) * normal`. Use it for bouncing projectiles and ricochets.

```cpp
Vector3 reflect(const Vector3& normal) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-reflect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-reflect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
