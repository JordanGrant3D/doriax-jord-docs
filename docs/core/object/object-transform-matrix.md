---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).setLocalMatrix() / getLocalMatrix() / getModelMatrix() / getNormalMatrix()

Direct access to the local-space transform matrix. Setting the local matrix decomposes it into position, rotation, and scale. The model matrix is the world-space transform computed from the full parent chain, and the normal matrix is its inverse-transpose, used in shaders to correctly transform surface normals when non-uniform scale is applied.

```cpp
void setLocalMatrix(Matrix4 localMatrix);
Matrix4 getLocalMatrix() const;
Matrix4 getModelMatrix() const;
Matrix4 getNormalMatrix() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-transform-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-transform-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
