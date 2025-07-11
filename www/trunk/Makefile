PORTNAME=	trunk
DISTVERSIONPREFIX=	v
DISTVERSION=	0.21.14
PORTREVISION=	2
CATEGORIES=	www devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Build, bundle & ship your Rust WASM application to the web
WWW=		https://trunkrs.dev/ \
		https://github.com/trunk-rs/trunk

LICENSE=	APACHE20 MIT
LICENSE_COMB=	dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE-MIT

LIB_DEPENDS=	libzstd.so:archivers/zstd

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	thedodd

RUSTFLAGS=	${ARCH:S/i386/YES/:C/^[a-z].*//:S/YES/-C target-feature=+sse,+sse2/} # add sse sse2 target-features only on i386

CARGO_CRATES=	addr2line-0.24.2 \
		adler2-2.0.0 \
		aes-0.8.4 \
		ahash-0.7.8 \
		ahash-0.8.11 \
		aho-corasick-0.7.20 \
		aho-corasick-1.1.3 \
		aligned-0.4.2 \
		anstream-0.6.18 \
		anstyle-1.0.10 \
		anstyle-parse-0.2.6 \
		anstyle-query-1.1.2 \
		anstyle-wincon-3.0.7 \
		anyhow-1.0.97 \
		arbitrary-1.4.1 \
		arc-swap-1.7.1 \
		as-slice-0.2.1 \
		async-recursion-1.1.1 \
		async-trait-0.1.88 \
		atomic-waker-1.1.2 \
		autocfg-1.4.0 \
		aws-lc-rs-1.13.0 \
		aws-lc-sys-0.28.0 \
		axum-0.8.3 \
		axum-core-0.5.2 \
		axum-server-0.7.2 \
		backtrace-0.3.74 \
		base64-0.22.1 \
		base64-simd-0.7.0 \
		bindgen-0.69.5 \
		bitflags-1.3.2 \
		bitflags-2.9.0 \
		bitvec-1.0.1 \
		block-buffer-0.10.4 \
		bumpalo-3.17.0 \
		bytecheck-0.6.12 \
		bytecheck_derive-0.6.12 \
		bytemuck-1.22.0 \
		byteorder-1.5.0 \
		bytes-1.10.1 \
		bzip2-0.5.2 \
		bzip2-sys-0.1.13+1.0.8 \
		camino-1.1.9 \
		cargo-lock-10.1.0 \
		cargo-platform-0.1.9 \
		cargo_metadata-0.19.2 \
		cc-1.2.18 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		cfg_aliases-0.2.1 \
		chrono-0.4.40 \
		cipher-0.4.4 \
		clang-sys-1.8.1 \
		clap-4.5.35 \
		clap_builder-4.5.35 \
		clap_derive-4.5.32 \
		clap_lex-0.7.4 \
		cmake-0.1.54 \
		colorchoice-1.0.3 \
		console-0.15.11 \
		const-str-0.3.2 \
		const-str-proc-macro-0.3.2 \
		constant_time_eq-0.3.1 \
		convert_case-0.4.0 \
		convert_case-0.6.0 \
		core-foundation-0.9.4 \
		core-foundation-0.10.0 \
		core-foundation-sys-0.8.7 \
		cpufeatures-0.2.17 \
		crates_io_api-0.11.0 \
		crc-3.2.1 \
		crc-catalog-2.4.0 \
		crc32fast-1.4.2 \
		critical-section-1.2.0 \
		crossbeam-channel-0.5.14 \
		crossbeam-deque-0.8.6 \
		crossbeam-epoch-0.9.18 \
		crossbeam-utils-0.8.21 \
		crypto-common-0.1.6 \
		cssparser-0.27.2 \
		cssparser-0.33.0 \
		cssparser-color-0.1.0 \
		cssparser-macros-0.6.1 \
		cvt-0.1.2 \
		dashmap-5.5.3 \
		data-encoding-2.8.0 \
		data-url-0.1.1 \
		deflate64-0.1.9 \
		deranged-0.4.0 \
		derive_arbitrary-1.4.1 \
		derive_more-0.99.19 \
		digest-0.10.7 \
		directories-6.0.0 \
		dirs-sys-0.5.0 \
		displaydoc-0.2.5 \
		dtoa-1.0.10 \
		dtoa-short-0.3.5 \
		dunce-1.0.5 \
		dyn-clone-1.0.19 \
		either-1.15.0 \
		encode_unicode-1.0.0 \
		encoding_rs-0.8.35 \
		enum-as-inner-0.6.1 \
		env_filter-0.1.3 \
		env_home-0.1.0 \
		env_logger-0.11.8 \
		equivalent-1.0.2 \
		errno-0.3.11 \
		fastrand-2.3.0 \
		file-id-0.2.2 \
		filetime-0.2.25 \
		flate2-1.1.1 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		fs-err-3.1.0 \
		fs_at-0.2.1 \
		fs_extra-1.3.0 \
		fsevent-sys-4.1.0 \
		funty-2.0.0 \
		futures-0.3.31 \
		futures-channel-0.3.31 \
		futures-core-0.3.31 \
		futures-executor-0.3.31 \
		futures-io-0.3.31 \
		futures-macro-0.3.31 \
		futures-sink-0.3.31 \
		futures-task-0.3.31 \
		futures-timer-3.0.3 \
		futures-util-0.3.31 \
		fxhash-0.2.1 \
		generator-0.8.4 \
		generic-array-0.14.7 \
		getrandom-0.1.16 \
		getrandom-0.2.15 \
		getrandom-0.3.2 \
		gimli-0.31.1 \
		glob-0.3.2 \
		h2-0.4.8 \
		hashbrown-0.12.3 \
		hashbrown-0.13.2 \
		hashbrown-0.14.5 \
		hashbrown-0.15.2 \
		heck-0.5.0 \
		hickory-proto-0.25.1 \
		hickory-resolver-0.25.1 \
		hmac-0.12.1 \
		home-0.5.11 \
		homedir-0.3.4 \
		hostname-0.4.0 \
		htmlescape-0.3.1 \
		http-1.3.1 \
		http-body-1.0.1 \
		http-body-util-0.1.3 \
		http-range-header-0.4.2 \
		httparse-1.10.1 \
		httpdate-1.0.3 \
		humantime-2.2.0 \
		humantime-serde-1.1.1 \
		hyper-1.6.0 \
		hyper-rustls-0.27.5 \
		hyper-tls-0.6.0 \
		hyper-util-0.1.11 \
		icu_collections-1.5.0 \
		icu_locid-1.5.0 \
		icu_locid_transform-1.5.0 \
		icu_locid_transform_data-1.5.1 \
		icu_normalizer-1.5.0 \
		icu_normalizer_data-1.5.1 \
		icu_properties-1.5.1 \
		icu_properties_data-1.5.1 \
		icu_provider-1.5.0 \
		icu_provider_macros-1.5.0 \
		idna-1.0.3 \
		idna_adapter-1.2.0 \
		indexmap-2.9.0 \
		inotify-0.11.0 \
		inotify-sys-0.1.5 \
		inout-0.1.4 \
		ipconfig-0.3.2 \
		ipnet-2.11.0 \
		is-docker-0.2.0 \
		is-wsl-0.4.0 \
		is_terminal_polyfill-1.70.1 \
		itertools-0.10.5 \
		itertools-0.12.1 \
		itoa-0.4.8 \
		itoa-1.0.15 \
		jobserver-0.1.33 \
		js-sys-0.3.77 \
		kqueue-1.0.8 \
		kqueue-sys-1.0.4 \
		lazy_static-1.5.0 \
		lazycell-1.3.0 \
		libc-0.2.171 \
		libdeflate-sys-1.23.1 \
		libdeflater-1.23.1 \
		libloading-0.8.6 \
		libredox-0.1.3 \
		lightningcss-1.0.0-alpha.65 \
		lightningcss-derive-1.0.0-alpha.43 \
		linux-raw-sys-0.4.15 \
		linux-raw-sys-0.9.3 \
		litemap-0.7.5 \
		local-ip-address-0.6.3 \
		lock_api-0.4.12 \
		lockfree-object-pool-0.1.6 \
		log-0.4.27 \
		lol_html-1.2.1 \
		loom-0.7.2 \
		lzma-rs-0.3.0 \
		lzma-sys-0.1.20 \
		matchers-0.1.0 \
		matches-0.1.10 \
		matchit-0.8.4 \
		memchr-2.7.4 \
		mime-0.3.17 \
		mime_guess-2.0.5 \
		minify-html-0.15.0 \
		minify-html-common-0.0.2 \
		minify-js-0.5.6 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.8.7 \
		mio-1.0.3 \
		moka-0.12.10 \
		native-tls-0.2.14 \
		neli-0.6.5 \
		neli-proc-macros-0.1.4 \
		nix-0.29.0 \
		nodrop-0.1.14 \
		nom-7.1.3 \
		normpath-1.3.0 \
		notify-8.0.0 \
		notify-debouncer-full-0.5.0 \
		notify-types-2.0.0 \
		nu-ansi-term-0.46.0 \
		num-conv-0.1.0 \
		num-traits-0.2.19 \
		object-0.36.7 \
		once_cell-1.21.3 \
		open-5.3.2 \
		openssl-0.10.72 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.6 \
		openssl-src-300.4.2+3.4.1 \
		openssl-sys-0.9.107 \
		option-ext-0.2.0 \
		outref-0.1.0 \
		overload-0.1.1 \
		oxipng-9.1.4 \
		parcel_selectors-0.28.1 \
		parcel_sourcemap-2.1.1 \
		parking_lot-0.12.3 \
		parking_lot_core-0.9.10 \
		parse-js-0.17.0 \
		paste-1.0.15 \
		pathdiff-0.2.3 \
		pbkdf2-0.12.2 \
		percent-encoding-2.3.1 \
		phf-0.8.0 \
		phf-0.11.3 \
		phf_codegen-0.8.0 \
		phf_codegen-0.11.3 \
		phf_generator-0.8.0 \
		phf_generator-0.11.3 \
		phf_macros-0.8.0 \
		phf_macros-0.11.3 \
		phf_shared-0.8.0 \
		phf_shared-0.11.3 \
		pin-project-lite-0.2.16 \
		pin-utils-0.1.0 \
		pkg-config-0.3.32 \
		portable-atomic-1.11.0 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.21 \
		precomputed-hash-0.1.1 \
		prettyplease-0.2.32 \
		proc-macro-crate-3.3.0 \
		proc-macro-hack-0.5.20+deprecated \
		proc-macro2-1.0.94 \
		ptr_meta-0.1.4 \
		ptr_meta_derive-0.1.4 \
		quinn-0.11.7 \
		quinn-proto-0.11.10 \
		quinn-udp-0.5.11 \
		quote-1.0.40 \
		r-efi-5.2.0 \
		radium-0.7.0 \
		rand-0.7.3 \
		rand-0.8.5 \
		rand-0.9.0 \
		rand_chacha-0.2.2 \
		rand_chacha-0.9.0 \
		rand_core-0.5.1 \
		rand_core-0.6.4 \
		rand_core-0.9.3 \
		rand_hc-0.2.0 \
		rand_pcg-0.2.1 \
		rayon-1.10.0 \
		rayon-core-1.12.1 \
		redox_syscall-0.5.11 \
		redox_users-0.5.0 \
		regex-1.11.1 \
		regex-automata-0.1.10 \
		regex-automata-0.4.9 \
		regex-syntax-0.6.29 \
		regex-syntax-0.8.5 \
		relative-path-1.9.3 \
		remove_dir_all-1.0.0 \
		rend-0.4.2 \
		reqwest-0.12.15 \
		resolv-conf-0.7.1 \
		rgb-0.8.50 \
		ring-0.17.14 \
		rkyv-0.7.45 \
		rkyv_derive-0.7.45 \
		rstest-0.25.0 \
		rstest_macros-0.25.0 \
		rustc-demangle-0.1.24 \
		rustc-hash-1.1.0 \
		rustc-hash-2.1.1 \
		rustc_version-0.4.1 \
		rustix-0.38.44 \
		rustix-1.0.5 \
		rustls-0.23.25 \
		rustls-native-certs-0.8.1 \
		rustls-pemfile-2.2.0 \
		rustls-pki-types-1.11.0 \
		rustls-webpki-0.103.1 \
		rustversion-1.0.20 \
		ryu-1.0.20 \
		same-file-1.0.6 \
		schannel-0.1.27 \
		schemars-0.8.22 \
		schemars_derive-0.8.22 \
		scoped-tls-1.0.1 \
		scopeguard-1.2.0 \
		seahash-4.1.0 \
		security-framework-2.11.1 \
		security-framework-3.2.0 \
		security-framework-sys-2.14.0 \
		selectors-0.22.0 \
		semver-1.0.26 \
		serde-1.0.219 \
		serde_derive-1.0.219 \
		serde_derive_internals-0.29.1 \
		serde_json-1.0.140 \
		serde_path_to_error-0.1.17 \
		serde_spanned-0.6.8 \
		serde_urlencoded-0.7.1 \
		serde_yaml-0.9.33 \
		servo_arc-0.1.1 \
		sha1-0.10.6 \
		sha2-0.10.8 \
		sharded-slab-0.1.7 \
		shlex-1.3.0 \
		signal-hook-registry-1.4.2 \
		simd-abstraction-0.7.1 \
		simd-adler32-0.3.7 \
		simdutf8-0.1.5 \
		siphasher-0.3.11 \
		siphasher-1.0.1 \
		slab-0.4.9 \
		smallvec-1.15.0 \
		socket2-0.5.9 \
		stable_deref_trait-1.2.0 \
		strsim-0.11.1 \
		strum-0.27.1 \
		strum_macros-0.27.1 \
		subtle-2.6.1 \
		syn-1.0.109 \
		syn-2.0.100 \
		sync_wrapper-1.0.2 \
		synstructure-0.13.1 \
		tagptr-0.2.0 \
		tap-1.0.1 \
		tar-0.4.44 \
		tempfile-3.19.1 \
		terminal_size-0.4.2 \
		thin-slice-0.1.1 \
		thiserror-1.0.69 \
		thiserror-2.0.12 \
		thiserror-impl-1.0.69 \
		thiserror-impl-2.0.12 \
		thread_local-1.1.8 \
		time-0.3.41 \
		time-core-0.1.4 \
		time-macros-0.2.22 \
		tinystr-0.7.6 \
		tinyvec-1.9.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.44.2 \
		tokio-macros-2.5.0 \
		tokio-native-tls-0.3.1 \
		tokio-openssl-0.6.5 \
		tokio-rustls-0.26.2 \
		tokio-stream-0.1.17 \
		tokio-tungstenite-0.26.2 \
		tokio-util-0.7.14 \
		toml-0.8.20 \
		toml_datetime-0.6.8 \
		toml_edit-0.22.24 \
		tower-0.5.2 \
		tower-http-0.6.2 \
		tower-layer-0.3.3 \
		tower-service-0.3.3 \
		tracing-0.1.41 \
		tracing-attributes-0.1.28 \
		tracing-core-0.1.33 \
		tracing-log-0.2.0 \
		tracing-subscriber-0.3.19 \
		try-lock-0.2.5 \
		tungstenite-0.26.2 \
		typenum-1.18.0 \
		unicase-2.8.1 \
		unicode-ident-1.0.18 \
		unicode-segmentation-1.12.0 \
		unicode-width-0.2.0 \
		unsafe-libyaml-0.2.11 \
		untrusted-0.9.0 \
		url-2.5.4 \
		utf-8-0.7.6 \
		utf16_iter-1.0.5 \
		utf8_iter-1.0.4 \
		utf8parse-0.2.2 \
		uuid-1.16.0 \
		valuable-0.1.1 \
		vcpkg-0.2.15 \
		version_check-0.9.5 \
		vlq-0.5.1 \
		walkdir-2.5.0 \
		want-0.3.1 \
		wasi-0.9.0+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasi-0.14.2+wasi-0.2.4 \
		wasm-bindgen-0.2.100 \
		wasm-bindgen-backend-0.2.100 \
		wasm-bindgen-futures-0.4.50 \
		wasm-bindgen-macro-0.2.100 \
		wasm-bindgen-macro-support-0.2.100 \
		wasm-bindgen-shared-0.2.100 \
		wasm-streams-0.4.2 \
		web-sys-0.3.77 \
		web-time-1.1.0 \
		webpki-roots-0.26.8 \
		which-4.4.2 \
		which-7.0.2 \
		widestring-1.2.0 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.9 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.52.0 \
		windows-0.57.0 \
		windows-0.58.0 \
		windows-core-0.52.0 \
		windows-core-0.57.0 \
		windows-core-0.58.0 \
		windows-implement-0.57.0 \
		windows-implement-0.58.0 \
		windows-interface-0.57.0 \
		windows-interface-0.58.0 \
		windows-link-0.1.1 \
		windows-registry-0.4.0 \
		windows-result-0.1.2 \
		windows-result-0.2.0 \
		windows-result-0.3.2 \
		windows-strings-0.1.0 \
		windows-strings-0.3.1 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-sys-0.59.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.6 \
		windows-targets-0.53.0 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.6 \
		windows_aarch64_gnullvm-0.53.0 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.6 \
		windows_aarch64_msvc-0.53.0 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.6 \
		windows_i686_gnu-0.53.0 \
		windows_i686_gnullvm-0.52.6 \
		windows_i686_gnullvm-0.53.0 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.6 \
		windows_i686_msvc-0.53.0 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.6 \
		windows_x86_64_gnu-0.53.0 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.6 \
		windows_x86_64_gnullvm-0.53.0 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.6 \
		windows_x86_64_msvc-0.53.0 \
		winnow-0.7.4 \
		winreg-0.50.0 \
		winsafe-0.0.19 \
		wit-bindgen-rt-0.39.0 \
		write16-1.0.0 \
		writeable-0.5.5 \
		wyz-0.5.1 \
		xattr-1.5.0 \
		xz2-0.1.7 \
		yoke-0.7.5 \
		yoke-derive-0.7.5 \
		zerocopy-0.7.35 \
		zerocopy-0.8.24 \
		zerocopy-derive-0.7.35 \
		zerocopy-derive-0.8.24 \
		zerofrom-0.1.6 \
		zerofrom-derive-0.1.6 \
		zeroize-1.8.1 \
		zeroize_derive-1.4.2 \
		zerovec-0.10.4 \
		zerovec-derive-0.10.3 \
		zip-2.6.1 \
		zopfli-0.8.1 \
		zstd-0.13.3 \
		zstd-safe-7.2.4 \
		zstd-sys-2.0.15+zstd.1.5.7

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
