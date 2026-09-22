---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Material
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Material

`Material` is a plain data struct holding the PBR (glTF 2.0 metallic-roughness) look of a mesh surface: colour factors, metalness/roughness, alpha mode, up to five texture slots, per-texture UV sets, and a name. A CharacterController skin system copies the mesh material, retints `baseColorFactor` per team, and writes it back with `Mesh::setMaterial`.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector4**](../../maths/vector4/vector4.md) | [**baseColorFactor**](material-base-color-factor.md) | Linear-space RGBA colour multiplied with `baseColorTexture`. Defaults to `(1, 1, 1, 1)`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**metallicFactor**](material-metallic-factor.md) | Metalness multiplier (`0.0` dielectric, `1.0` metallic). Defaults to `1.0`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**roughnessFactor**](material-roughness-factor.md) | Roughness multiplier (`0.0` glossy, `1.0` diffuse). Defaults to `1.0`. |
| [**MaterialAlphaMode**](material-alpha-mode/material-alpha-mode.md) | [**alphaMode**](material-alpha-mode.md) | How combined alpha is rendered (`AUTO`, `ALPHA_OPAQUE`, `MASK`, `BLEND`). Defaults to `AUTO`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**alphaCutoff**](material-alpha-cutoff.md) | Alpha threshold used by `MASK` mode. Defaults to `0.5`. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**emissiveFactor**](material-emissive-factor.md) | Additive linear-space RGB glow colour. Defaults to `(0, 0, 0)`. |
| [**Texture**](../texture/texture.md) | [**baseColorTexture**](material-base-color-texture.md) | Albedo texture multiplied with `baseColorFactor`. Empty by default. |
| [**Texture**](../texture/texture.md) | [**emissiveTexture**](material-emissive-texture.md) | Emission texture multiplied with `emissiveFactor`. Empty by default. |
| [**Texture**](../texture/texture.md) | [**metallicRoughnessTexture**](material-metallic-roughness-texture.md) | Packed metallic (B) / roughness (G) texture. Empty by default. |
| [**Texture**](../texture/texture.md) | [**occlusionTexture**](material-occlusion-texture.md) | Baked ambient-occlusion texture (R channel). Empty by default. |
| [**Texture**](../texture/texture.md) | [**normalTexture**](material-normal-texture.md) | Tangent-space normal map. Empty by default. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**baseColorTexCoord**](material-base-color-tex-coord.md) | UV set sampled by `baseColorTexture` (`0` or `1`). Defaults to `0`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**metallicRoughnessTexCoord**](material-metallic-roughness-tex-coord.md) | UV set sampled by `metallicRoughnessTexture`. Defaults to `0`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**occlusionTexCoord**](material-occlusion-tex-coord.md) | UV set sampled by `occlusionTexture`. Defaults to `0`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**emissiveTexCoord**](material-emissive-tex-coord.md) | UV set sampled by `emissiveTexture`. Defaults to `0`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**normalTexCoord**](material-normal-tex-coord.md) | UV set sampled by `normalTexture`. Defaults to `0`. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**name**](material-name.md) | Human-readable material identifier, usually set by model loading. Defaults to `""`. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default-constructs a white, fully metallic, medium-cutout PBR material with no textures and `alphaMode` set to `AUTO`. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](material-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Material&**](material.md) other | Compares every factor, texture, UV set, alpha mode, and name for equality. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](material-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Material&**](material.md) other | Returns `true` when any field differs from `other`. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
