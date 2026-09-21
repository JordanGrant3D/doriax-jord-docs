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

## [Vector3](vector3.md).operator+=(const Vector3& v)

In-place addition. Adds `v` into `*this` and returns a reference to `*this`. Used to accumulate `inputDir` in CharacterController.

```cpp
Vector3& operator+=(const Vector3& v);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-add-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-add-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
