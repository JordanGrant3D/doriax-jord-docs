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

## [Vector3](vector3.md).operator+(const Vector3& v)

Component-wise addition. Returns a new vector. This is how CharacterController builds `inputDir = inputDir + camForward`.

```cpp
Vector3 operator+(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-add.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-add.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
