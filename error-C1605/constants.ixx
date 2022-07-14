export module constants;

namespace fs = std::filesystem;

export namespace constants
{
	inline constexpr glm::u8vec2 window_size{ 1280, 720 };

	namespace paths
	{
		inline auto general_ini(void) -> fs::path
		{
			return fs::current_path() / TEXT("General.ini");
		}
	}
}
