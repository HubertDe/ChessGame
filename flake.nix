{
	description = "Chess game flake with gcc and gdb";

	inputs = {
		nixpkgs.url = "github:NixOS/nixpkgs";
	};

	outputs = {self, nixpkgs}:
		let
			system = "x86_64-linux";
			pkgs = import nixpkgs {inherit system;};
		in {
			devShells.${system}.default = pkgs.mkShell {
				packages = [pkgs.gcc pkgs.gdb];
			};
		};
}

