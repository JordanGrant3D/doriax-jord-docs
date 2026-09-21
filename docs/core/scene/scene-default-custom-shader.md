---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setDefaultCustomShader()

Sets the scene-wide custom shader for a `ShaderType` category (mesh, UI, skybox, points, or lines) in one call, and `getDefaultCustomShader()` returns the path for a category. It forwards to the matching per-category setter.

```cpp
void setDefaultCustomShader(ShaderType type, const std::string& path);
const std::string& getDefaultCustomShader(ShaderType type) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-default-custom-shader.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-default-custom-shader.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
