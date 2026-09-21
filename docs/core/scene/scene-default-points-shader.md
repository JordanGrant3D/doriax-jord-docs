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

## [Scene](scene.md).setDefaultPointsShader()

Sets the scene-wide custom shader for Points components, used by every Points whose own custom shader is empty, and `getDefaultPointsShader()` returns the project-relative base path. An empty string means the engine built-in.

```cpp
void setDefaultPointsShader(const std::string& path);
const std::string& getDefaultPointsShader() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-default-points-shader.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-default-points-shader.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
