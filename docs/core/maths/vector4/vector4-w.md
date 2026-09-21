---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).w

W component of the vector. As an RGBA colour this is the alpha (opacity) channel; as a blend set it is channel 3 (waiting idle); as a homogeneous position it is the perspective divisor.

```cpp
float w;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-w.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-w.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
